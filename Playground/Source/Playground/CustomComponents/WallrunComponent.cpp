//Wallrun component based on reids wallrun tutorial series

#include "WallrunComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Playground/Controllers/CharacterController.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Playground/Utilities/CustomUtils.h"

#pragma region UnrealFunctions

UWallrunComponent::UWallrunComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	wallrunTimerExpired=true;

	wallrunSide=EWallrunSide::None;
	wallrunMode=EWallrunMode::None;

	desiredHorizontalMode = EWallrunMode::Horizontal;
	desiredVerticalMode = EWallrunMode::Vertical;
	desiredDiagonalMode = EWallrunMode::Visual;
}

void UWallrunComponent::BeginPlay()
{
	Super::BeginPlay();

	checkWallRayLength=Character->GetCapsule()->GetScaledCapsuleRadius() * 2.5f;
	initialAirControl=Character->Movement->AirControl;
	wallrunSide=EWallrunSide::None;
	wallrunMode=EWallrunMode::None;
}

void UWallrunComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

#pragma endregion

#pragma region GettersSetters

FVector UWallrunComponent::GetVelocity() {
	FVector wallrunVelocity=
		wallrunMoveDirection*Character->Movement->MaxCustomMovementSpeed;
	
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
	if(bAlwaysStickToWall) {
		return GetVelocity();
	}

	switch (wallrunMode) {
		case EWallrunMode::Horizontal:
			return GetVelocity();
			break;

		case EWallrunMode::Vertical:
			return GetInterpVelocity();
			break;

		case EWallrunMode::Diagonal:
			return GetInterpVelocity();
			break;

		case EWallrunMode::Visual:
			return GetInterpVelocity();
			break;

		default:
			return GetInterpVelocity();
			break;
	}
}

#pragma endregion

#pragma region WallrunStatus

void UWallrunComponent::UpdateWallInfo(const FHitResult& Hit) {
	lastValidNormal=wallNormal;

	currentValidHit=Hit;

	wallNormal=Hit.ImpactNormal;
	wallSideward=FVector::CrossProduct(wallNormal, FVector::UpVector).GetSafeNormal();
	wallUpward=FVector::CrossProduct(wallSideward, wallNormal).GetSafeNormal();
}

void UWallrunComponent::UpdateWallInfo() {
	lastValidNormal=wallNormal;

	wallNormal=currentValidHit.ImpactNormal;
	wallSideward=FVector::CrossProduct(wallNormal, FVector::UpVector).GetSafeNormal();
	wallUpward=FVector::CrossProduct(wallSideward, wallNormal).GetSafeNormal();
}

void UWallrunComponent::ResetHitAndWallInfo() {
	// UCustomUtils::Print("RESET WALL INFO");
	if(!HasValidHit()) {
		return;
	}
	
	lastValidNormal=wallNormal;

	currentValidHit = FHitResult();

	wallNormal=FVector::ZeroVector;
	wallSideward=FVector::ZeroVector;
	wallUpward=FVector::ZeroVector;

	
}

bool UWallrunComponent::HasValidHit() {
	return (currentValidHit.bBlockingHit); // && (!WallrunComponent->wallNormal.IsNearlyZero());
}

bool UWallrunComponent::IsValidForWallrun(FVector surfaceNormal) {
	FVector upDir=FVector::UpVector;
	float dotNormalUp=FVector::DotProduct(surfaceNormal, upDir);
	
	if(dotNormalUp < -0.05f) {
		return false;
	}

	// non muri troppo orizzontali, 0.5f sono 30gradi
	if(dotNormalUp > wallAngleDotThreshold) {
		return false;
	}

	return true;
}

bool UWallrunComponent::CanWallrun() {
	if(!wallrunTimerExpired) {
		return false;
	}

	if(!HasValidHit()) {
		return false;
	}

	if(!RaycastInMoveDirection()) {
		ResetHitAndWallInfo();
		return false;
	}
	
	if(!IsMoveDirectionTowardsWall()) {
		return false;
	}

	if(CancelConditionsByMode()) {
		return false;
	}
	
	return true;
}

bool UWallrunComponent::ShouldEndWallrun() {

	if(!HasValidHit()) {
		UCustomUtils::Print("should end wallrun: no hit");
		SetLastEndreason(EWallrunEndreason::NoHit);
		return true;
	}
	
	if(!IsMoveDirectionTowardsWall()) {
		// UCustomUtils::Print("should end wallrun: not moving towards wall");
		SetLastEndreason(EWallrunEndreason::WrongDirection);
		return true;
	}

	if(CancelConditionsByMode()) {
		SetLastEndreason(EWallrunEndreason::WrongMode);
		return true;
	}

	if(startingLateralWallSide != wallrunSide) {
		SetLastEndreason(EWallrunEndreason::SideChange);
		return true;
	}

	if(Character->GetVelocity().Size()<velocityWallrunThreshold) {
		// UCustomUtils::Print("should end wallrun: low velocity, current is " + FString::SanitizeFloat(GetVelocity().Size()));
		SetLastEndreason(EWallrunEndreason::Fall);
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
		float dotVal=FVector::DotProduct(-wallNormal, Character->moveDirection);

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
	Character->bIsWallrunning=true;

	// UpdateWallrunModeOnInputKeys();
	UpdateWallrunSide();
	UpdateWallrunDirection();

	Character->Movement->AirControl=1;
	Character->Movement->GravityScale=0;

	//remove vertical velocity component at start
	Character->CancelVerticalVelocity();

	// Movement->SetPlaneConstraintNormal(FVector::UpVector);
	// Movement->SetPlaneConstraintNormal(FVector::ZeroVector);
	
	startingLateralWallSide=wallrunSide;
}

void UWallrunComponent::EndWallrun() {
	EWallrunEndreason endreason = lastEndReason;
	
	Character->bIsWallrunning=false;
	Character->Movement->AirControl=initialAirControl;
	Character->Movement->GravityScale=1;

	wallrunSide=EWallrunSide::None;
	startingLateralWallSide=EWallrunSide::None;
	// Movement->SetPlaneConstraintNormal(FVector::ZeroVector);

	ResetHitAndWallInfo();
	wallrunMoveDirection=FVector::ZeroVector;
	moveDirectionAlongWallAxis=FVector::ZeroVector;
	lookingMoveDirectionAlongWallAxis=FVector::ZeroVector;

	switch (endreason) {
		case EWallrunEndreason::Jump:
			StartWallrunDelayTimer(wallrunDelay);
			break;
	
		case EWallrunEndreason::SideChange:
			StartWallrunDelayTimer(wallrunDelay * 1.25f);
			break;
	
		case EWallrunEndreason::WrongKeys:
			StartWallrunDelayTimer(wallrunDelay * 0.5f);
			break;

		case EWallrunEndreason::WrongDirection:
			StartWallrunDelayTimer(wallrunDelay);
			break;
	
		default:
			StartWallrunDelayTimer(wallrunDelay);
			break;
	}
}

void UWallrunComponent::StartWallrunDelayTimer(float time) {
	wallrunTimerExpired=false;
	Character->GetWorldTimerManager().SetTimer(wallrunDelayTimer, this, &UWallrunComponent::ResetWallrunTimer, time);
}

void UWallrunComponent::ResetWallrunTimer() {
	wallrunTimerExpired=true;
}

FString UWallrunComponent::GetWallSide() {
	return FString(UEnum::GetDisplayValueAsText(wallrunSide).ToString());
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
			if(dotSideward < -lateralSideChangeThreshold) {
				wallrunSide=EWallrunSide::Left;
			}

			break;
		
		case EWallrunSide::Left:
			if(dotSideward > lateralSideChangeThreshold) {
				wallrunSide=EWallrunSide::Right;
			}

			break;

		case EWallrunSide::Front:
			if(dotSideward < -frontSideThreshold) {
				wallrunSide=EWallrunSide::Left;
			}
			else if(dotSideward > frontSideThreshold) {
				wallrunSide=EWallrunSide::Right;
			}

			break;

		default:
			if(absDotSideward < frontSideThreshold) {
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
					wallrunMoveDirection=wallSideward;

					break;
				
				case EWallrunSide::Left:
					wallrunMoveDirection=-wallSideward;

					break;
					
				default:
					if(lookingMoveDirectionAlongWallAxis.Y < 0) {
						wallrunMoveDirection=wallSideward;
					}else {
						wallrunMoveDirection=-wallSideward;
					}
					break;
			}
			
			break;

		case EWallrunMode::Vertical:
			wallrunMoveDirection=wallUpward;
			break;

		case EWallrunMode::Diagonal:
			SidewardMovementAlongWallAxis=-Character->inputValues.moveInput.Y * wallSideward;
			UpwardMovementAlongWallAxis=Character->inputValues.moveInput.X * wallUpward;
			moveDirectionAlongWallAxis=(UpwardMovementAlongWallAxis + SidewardMovementAlongWallAxis).GetSafeNormal();

			wallrunMoveDirection=moveDirectionAlongWallAxis;
			break;

		case EWallrunMode::Visual:
			lookingMoveDirectionAlongWallAxis=FVector::VectorPlaneProject(Character->lookingDirection, wallNormal).GetSafeNormal();

			lookingMoveDirectionAlongWallAxis.Z = FMath::Max(visualWallrunMinVerticalValue, lookingMoveDirectionAlongWallAxis.Z);
			
			wallrunMoveDirection=lookingMoveDirectionAlongWallAxis;
			break;

		default:
			break;
	}
}

void UWallrunComponent::UpdateWallrunAndInfoIfRayHit() {
	// UpdateWallrunSide();

	FVector vecToWall;
	vecToWall=(-wallNormal)*checkWallRayLength;
	vecToWall = Character->GetActorLocation()+vecToWall;

	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(Character);

	FHitResult Hit;
	if(RaycastFromCapsule(Hit, vecToWall))
	{

		// UCustomUtils::Print("Update HIT from RayHit");
		currentValidHit=Hit;
		UpdateWallInfo();
		
		UpdateWallrunSide();
		UpdateWallrunDirection();

	}
	else {
		ResetHitAndWallInfo();
	}
}

void UWallrunComponent::SnapToWall() {
	// UCustomUtils::Print("Stick to wall activated");

	float distance=currentValidHit.Distance - Character->GetCapsule()->GetScaledCapsuleRadius();
	FVector snap=-wallNormal * distance * 0.95f;
	FVector adjustedPosition=Character->GetActorLocation()+snap;

	Character->SetActorLocation(adjustedPosition, false);
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
	vecToWall=(Character->moveDirection)*checkWallRayLength;
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

#pragma endregion
