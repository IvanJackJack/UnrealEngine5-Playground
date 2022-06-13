//Wallrun component based on reids wallrun tutorial series

#include "WallrunComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Playground/Controllers/CapsuleCharacter/CharacterController.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Playground/Utilities/CustomUtils.h"

#pragma region UnrealFunctions

UWallrunComponent::UWallrunComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	wallrunLockTimerExpired=true;

	wallrunSide=EWallrunSide::None;
	wallrunMode=EWallrunMode::None;
	gravityMode=EGravityMode::Zero;

	desiredHorizontalMode = EWallrunMode::Horizontal;
	desiredVerticalMode = EWallrunMode::Visual;
	desiredDiagonalMode = EWallrunMode::Visual;
}

void UWallrunComponent::BeginPlay()
{
	Super::BeginPlay();

	rayCheckForWallLength=Character->GetCapsule()->GetScaledCapsuleRadius() * 3.f;
	initialAirControl=Character->Movement->AirControl;
	wallrunSide=EWallrunSide::None;
	wallrunMode=EWallrunMode::None;

	if(bUseCharacterMaxWalkableAngle) {
		wallrunAngleThreshold=Character->Movement->GetWalkableFloorAngle();
	}
}

void UWallrunComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

#pragma endregion

#pragma region GettersSetters

FVector UWallrunComponent::GetVelocity() {
	wallrunVelocity=wallrunDirection*Character->Movement->MaxFlySpeed;

	if(bAlwaysStickToWall && !IsCharacterNearWall()) {
		FVector pushToWallVelocity=playerToWallVector;
		wallrunVelocity+=pushToWallVelocity;
	}

	wallrunVelocity*=wallrunVelocityMult;

	return wallrunVelocity;
}

FVector UWallrunComponent::GetInterpVelocity() {
	return (MoveTowardsVector(
		GetVelocity(),
		Character->GetVelocity(),
		velocityAccelerationRatio
	));
}

FVector UWallrunComponent::GetVelocityByMode() {
	switch (wallrunMode) {
		case EWallrunMode::Horizontal:
			return GetVelocity();
			break;
		
		case EWallrunMode::Vertical:
			return GetVelocity();
			break;
		
		case EWallrunMode::Diagonal:
			return GetVelocity();
			break;
		
		case EWallrunMode::Visual:
			return GetVelocity();
			break;
		
		default:
			return GetVelocity();
			break;
	}
}

#pragma endregion

#pragma region WallrunStatus

void UWallrunComponent::UpdateWallInfo(const FHitResult& Hit) {
	// UCustomUtils::Print("UPDATE WALL INFO from " + caller, 2);

	currentValidHit=Hit;
	lastValidWallNormal=wallNormal;

	wallNormal=currentValidHit.ImpactNormal;
	wallSideward=FVector::CrossProduct(wallNormal, FVector::UpVector).GetSafeNormal();
	wallUpward=FVector::CrossProduct(wallSideward, wallNormal).GetSafeNormal();

	wallAngle=GetHorizontalAngle(wallNormal);
	playerToWallVector=currentValidHit.ImpactPoint - Character->GetActorLocation();
}

void UWallrunComponent::ResetHitAndWallInfo() {
	// UCustomUtils::Print("RESET WALL INFO");
	if(!HasValidHit()) {
		return;
	}
	
	lastValidWallNormal=wallNormal;

	currentValidHit = FHitResult();

	wallNormal=FVector::ZeroVector;
	wallSideward=FVector::ZeroVector;
	wallUpward=FVector::ZeroVector;

	wallAngle=0.f;
	playerToWallVector=FVector::ZeroVector;
}

bool UWallrunComponent::HasValidHit() {
	return (currentValidHit.bBlockingHit); // && (!WallrunComponent->wallNormal.IsNearlyZero());
}

bool UWallrunComponent::IsValidForWallrun(FVector surfaceNormal) {
	float surfaceAngle=GetVerticalAngle(surfaceNormal);
	// UCustomUtils::Print("Surface angle is " + FString::SanitizeFloat(surfaceAngle));
	
	return (surfaceAngle>=wallrunAngleThreshold);
}

bool UWallrunComponent::CanWallrun() {
	if(!wallrunLockTimerExpired) {
		return false;
	}

	if(!HasValidHit()) {
		return false;
	}

	if(!RaycastInMoveDirection()) {
		UCustomUtils::Print("can wallrun failed", 2);
		ResetHitAndWallInfo();
		return false;
	}

	if(CancelConditionsByMode()) {
		return false;
	}

	if(!IsMoveDirectionTowardsWall()) {
		UCustomUtils::Print("IsMoveDirectionTowardsWall failed", 2);
		return false;
	}
	
	return true;
}

bool UWallrunComponent::ShouldEndWallrun() {
	if(!HasValidHit()) {
		SetLastEndreason(EWallrunEndreason::NoHit);
		return true;
	}

	if(CancelConditionsByMode()) {
		SetLastEndreason(EWallrunEndreason::WrongMode);
		return true;
	}

	if(!IsMoveDirectionTowardsWall()) {
		SetLastEndreason(EWallrunEndreason::WrongDirection);
		return true;
	}
	
	if(bCancelWallrunWhenSideChanges && startingLateralWallSide != wallrunSide) {
		SetLastEndreason(EWallrunEndreason::SideChange);
		return true;
	}

	// UCustomUtils::Print(Character->GetVelocity().Length());
	if(Character->GetActorVelocity().IsNearlyZero()) {
		SetLastEndreason(EWallrunEndreason::LowVelocity);
		return true;
	}
	
	return false;
}

bool UWallrunComponent::CancelConditionsByMode() {
	if(wallrunMode==EWallrunMode::None) {
		SetLastEndreason(EWallrunEndreason::WrongMode);
		return true;
	}
	
	if(wallrunSide==EWallrunSide::Front && wallrunMode==desiredHorizontalMode) {
		SetLastEndreason(EWallrunEndreason::WrongMode);
		return true;
	}

	if(LookingDownOverThreshold() && wallrunMode!=desiredHorizontalMode) {
		SetLastEndreason(EWallrunEndreason::WrongMode);
		return true;
	}


	return false;
}

bool UWallrunComponent::IsMoveDirectionTowardsWall() {
	if(Character->inputValues.moveInput.X < -0.1f) {
		return false;
	}
	
	bool correctMoveDirection;

	if(Character->inputValues.moveInput.IsNearlyZero()) {
		correctMoveDirection = false;
	}
	else {
		FVector horizontalWallNormal=FVector(wallNormal.X, wallNormal.Y, 0.f);
		float dotVal=FVector::DotProduct(-horizontalWallNormal, Character->moveDirection);

		if(dotVal>0.15f) {
			correctMoveDirection=true;
		}else {
			correctMoveDirection=false;
		}
	}

	return correctMoveDirection;
}

bool UWallrunComponent::LookingDownOverThreshold() {
	return Character->lookingDirection.Z < visualWallrunLookingDownThreshold;
}

void UWallrunComponent::BeginWallrun() {
	bIsWallrunning=true;

	// UpdateWallrunModeOnInputKeys();
	UpdateWallrunSide();
	UpdateWallrunDirection();

	Character->Movement->AirControl=1;

	switch(gravityMode) {
		case EGravityMode::Zero:
			Character->Movement->GravityScale=0;
			wallrunVelocityMult=1.f;
			bLaunchOverrideXY=true;
			bLaunchOverrideZ=true;

			break;
		case EGravityMode::Reduced:
			Character->Movement->GravityScale=reducedGravity;
			// wallrunVelocityMult=0.0334f;
			wallrunVelocityMult=FMath::Pow(reducedGravity, 2) * 0.125f;
			bLaunchOverrideXY=false;
			bLaunchOverrideZ=false;

		break;
		case EGravityMode::OverTime:
			Character->Movement->GravityScale=reducedGravity;
			UCustomUtils::Print("Gravity mode over time to be implemented");
			break;
		default:
			Character->Movement->GravityScale=0;
			break;
	}
	

	//remove vertical velocity component at start
	Character->CancelVerticalVelocity();

	// Movement->SetPlaneConstraintNormal(FVector::UpVector);
	// Movement->SetPlaneConstraintNormal(FVector::ZeroVector);
	
	startingLateralWallSide=wallrunSide;
}

void UWallrunComponent::EndWallrun() {
	EWallrunEndreason endreason = lastEndReason;
	
	bIsWallrunning=false;
	bForceCancelWallrun=false;

	Character->Movement->AirControl=initialAirControl;
	Character->Movement->GravityScale=1;

	wallrunSide=EWallrunSide::None;
	startingLateralWallSide=EWallrunSide::None;
	// Movement->SetPlaneConstraintNormal(FVector::ZeroVector);

	ResetHitAndWallInfo();
	wallrunDirection=FVector::ZeroVector;
	moveDirectionAlongWallAxis=FVector::ZeroVector;
	lookingMoveDirectionAlongWallAxis=FVector::ZeroVector;

	switch (endreason) {
		case EWallrunEndreason::Jump:
			StartWallrunDelayTimer(wallrunLockDelay);
			break;
	
		case EWallrunEndreason::SideChange:
			StartWallrunDelayTimer(wallrunLockDelay * 1.25f);
			break;
	
		case EWallrunEndreason::Forced:
			StartWallrunDelayTimer(wallrunLockDelay);
			break;

		case EWallrunEndreason::WrongDirection:
			StartWallrunDelayTimer(wallrunLockDelay);
			break;
	
		default:
			StartWallrunDelayTimer(wallrunLockDelay);
			break;
	}
}

void UWallrunComponent::StartWallrunDelayTimer(float time) {
	wallrunLockTimerExpired=false;
	Character->GetWorldTimerManager().SetTimer(wallrunLockTimer, this, &UWallrunComponent::ResetWallrunTimer, time);
}

void UWallrunComponent::ResetWallrunTimer() {
	wallrunLockTimerExpired=true;
}

FString UWallrunComponent::GetWallSide() {
	return FString(UEnum::GetDisplayValueAsText(wallrunSide).ToString());
}

bool UWallrunComponent::IsCharacterNearWall() {
	return (playerToWallVector.Length() <= Character->GetCapsule()->GetScaledCapsuleRadius() * 1.15f);
}

bool UWallrunComponent::CanRegisterHit() {
	if(bIsWallrunning || !wallrunLockTimerExpired) {
		return false;
	}

	return true;
}

#pragma endregion

#pragma region WallrunMovement

void UWallrunComponent::UpdateWallrunModeOnInputKeys() {
	if(Character->inputValues.moveInput.IsNearlyZero() || Character->inputValues.moveInput.X < -0.1f) {
		return;
	}

	if(Character->inputValues.moveInput.Y != 0.f) {
		if(Character->inputValues.moveInput.X != 0) {
			// premo W + A o D
			wallrunMode=desiredDiagonalMode;
			
		}else{
			// premo A o D
			wallrunMode=desiredHorizontalMode;
			
		
		}
		
	}else {
		// premo W
		wallrunMode=desiredVerticalMode;
		
	}
	
}

void UWallrunComponent::UpdateWallrunSide() {
	//2D per il casi di muri inclinati
	FVector2D wallNormal2D=FVector2D(wallNormal);
	FVector2D characterSideward2D=FVector2D(Character->characterSideward);

	float dotSideward=FVector2D::DotProduct(wallNormal2D, characterSideward2D);
	float absDotSideward=FMath::Abs(dotSideward);
	
	
	switch (wallrunSide) {
		case EWallrunSide::Right:
			if(dotSideward < -lateralSideChangeDotOffset) {
				wallrunSide=EWallrunSide::Left;
			}

			break;
		
		case EWallrunSide::Left:
			if(dotSideward > lateralSideChangeDotOffset) {
				wallrunSide=EWallrunSide::Right;
			}

			break;

		case EWallrunSide::Front:
			if(dotSideward < -lateralSideDotThreshold) {
				wallrunSide=EWallrunSide::Left;
			}
			else if(dotSideward > lateralSideDotThreshold) {
				wallrunSide=EWallrunSide::Right;
			}

			break;

		default:
			if(absDotSideward < lateralSideDotThreshold) {
				wallrunSide=EWallrunSide::Front;
				startingLateralWallSide=EWallrunSide::Front;
			}
			else if(dotSideward < 0) {
				wallrunSide=EWallrunSide::Left;
				startingLateralWallSide=EWallrunSide::Left;
			}
			else {
				wallrunSide=EWallrunSide::Right;
				startingLateralWallSide=EWallrunSide::Right;
			}

			break;
	}
	
	
}

void UWallrunComponent::UpdateWallrunDirection() {
	FVector SidewardMovementAlongWallAxis;
	FVector UpwardMovementAlongWallAxis;

	switch (wallrunMode) {
		case EWallrunMode::Horizontal:
			switch (wallrunSide) {
				case EWallrunSide::Right:
					wallrunDirection=wallSideward;

					break;
				
				case EWallrunSide::Left:
					wallrunDirection=-wallSideward;

					break;
					
				default:
					if(lookingMoveDirectionAlongWallAxis.Y < 0) {
						wallrunDirection=wallSideward;
					}else {
						wallrunDirection=-wallSideward;
					}
					break;
			}
			
			break;

		case EWallrunMode::Vertical:
			wallrunDirection=wallUpward;
			break;

		case EWallrunMode::Diagonal:
			SidewardMovementAlongWallAxis=-Character->inputValues.moveInput.Y * wallSideward;
			UpwardMovementAlongWallAxis=Character->inputValues.moveInput.X * wallUpward;
			moveDirectionAlongWallAxis=(UpwardMovementAlongWallAxis + SidewardMovementAlongWallAxis).GetSafeNormal();

			wallrunDirection=moveDirectionAlongWallAxis;
			break;

		case EWallrunMode::Visual:
			lookingMoveDirectionAlongWallAxis=FVector::VectorPlaneProject(Character->lookingDirection, wallNormal);

			lookingMoveDirectionAlongWallAxis.Z = FMath::Max(visualWallrunMinVerticalValue, lookingMoveDirectionAlongWallAxis.Z);
			
			wallrunDirection=lookingMoveDirectionAlongWallAxis.GetSafeNormal();
			break;

		default:
			break;
	}
}

void UWallrunComponent::UpdateWallrunAndInfoIfRayHit() {
	FVector rayCheckVector=Character->GetActorLocation() + (-wallNormal * rayCheckForWallLength);
	
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(Character);
	FHitResult Hit;
	if(RaycastFromCapsule(Hit, rayCheckVector))
	{
		
		// currentValidHit=Hit;
		UpdateWallInfo(Hit);

		// if(FVector::DotProduct(wallNormal, lastValidWallNormal)<0.9f) {
		// 	UCustomUtils::Print("normal changed");
		// }

		UpdateWallrunSide();
		UpdateWallrunDirection();
	}
	else {
		UCustomUtils::Print("ray check to wall failed", 2);
		ResetHitAndWallInfo();
	}
}

#pragma endregion

#pragma region UtilitiesFunctions
bool UWallrunComponent::RaycastFromCapsule(FHitResult& Hit, FVector End) {
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(Character);

	return GetWorld()->LineTraceSingleByChannel(
		Hit, 
		Character->GetActorLocation(), 
		End,
		ECC_Visibility,
		collisionParams,
		FCollisionResponseParams::DefaultResponseParam );
}

bool UWallrunComponent::RaycastInMoveDirection() {
	FVector vecToWall;
	vecToWall=(Character->moveDirection)*rayCheckForWallLength;
	vecToWall = Character->GetActorLocation()+vecToWall;
	
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(Character);

	FHitResult Hit;
	return RaycastFromCapsule(Hit, vecToWall);
}

FVector UWallrunComponent::MoveTowardsVector(FVector current, FVector target, float accel) {
	float deltaTime=GetWorld()->DeltaTimeSeconds;
	return FMath::VInterpTo(current, target, deltaTime, accel);
}

float UWallrunComponent::GetHorizontalAngle(FVector direction) {
	FVector horizontalDirection=FVector(direction.X, direction.Y, 0.f).GetSafeNormal();
	float horizontalSlope=FVector::DotProduct(direction, horizontalDirection);
	float horizontalAngle=FMath::RadiansToDegrees(FMath::Acos(horizontalSlope)) * FMath::Sign(horizontalSlope);

	return horizontalAngle;
}

float UWallrunComponent::GetVerticalAngle(FVector direction) {
	float slope=FVector::DotProduct(direction, FVector::UpVector);
	float angle=FMath::RadiansToDegrees(FMath::Acos(slope));

	if(direction.Z < -0.1) {
		angle -=90.f;
		angle *= -1;
	}

	return angle;
}

#pragma endregion
