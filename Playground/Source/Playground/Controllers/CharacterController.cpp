#include "CharacterController.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Playground/Utilities/CustomUtils.h"
#include "Playground/FiniteStateMachine/StateMachineComponent.h"
#include "CharacterPlayerController.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"

#pragma region UnrealFunctions

ACharacterController::ACharacterController() {
 	PrimaryActorTick.bCanEverTick = true;

	Capsule=GetCapsuleComponent();
	Capsule->InitCapsuleSize(27.5f, 92.5f);

	Movement=GetCharacterMovement();
	Movement->bOrientRotationToMovement = true;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 600.0f; 	
	CameraBoom->bUsePawnControlRotation = true; 

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	Camera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); 
	Camera->bUsePawnControlRotation = false; 

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	cameraRotationSpeed=100.f;

	StateMachine=CreateDefaultSubobject<UStateMachineComponent>("State Machine");
	
	characterStatus.bIsGrounded=true;
	characterStatus.wallrunTimerExpired=true;
}

void ACharacterController::BeginPlay()
{
	Super::BeginPlay();

	CharacterPlayerController=Cast<ACharacterPlayerController>(GetController());

	StateMachine->Setup(FFSMContext{this, StateMachine});

	Capsule->OnComponentBeginOverlap.AddDynamic(this, &ACharacterController::OnBeginOverlap);
	Capsule->OnComponentEndOverlap.AddDynamic(this, &ACharacterController::OnEndOverlap);
	Capsule->OnComponentHit.AddDynamic(this, &ACharacterController::OnHit);

	Movement->SetPlaneConstraintEnabled(true);

	ResetJumpCount(jumpsMax);
	checkWallRayLEngth=Capsule->GetScaledCapsuleRadius() * 2.f;
}

void ACharacterController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdateCharacterAxis();
	UpdateMoveDirection();
}

void ACharacterController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacterController::ReadJumpInputStart);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacterController::ReadJumpInputEnd);

	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &ACharacterController::ReadSprintInputStart);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &ACharacterController::ReadSprintInputEnd);
	
	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &ACharacterController::ReadMoveForwardInput);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &ACharacterController::ReadMoveSidewardInput);

	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &ACharacterController::TurnCamera);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &ACharacterController::LookUpCamera);
	
}

void ACharacterController::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	PlatformOverlap();
}

void ACharacterController::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
	PlatformOverlapLeft();
}

void ACharacterController::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
	if(characterStatus.bIsWallrunning && characterStatus.lastValidHit.bBlockingHit) {
		return;
	}

	if(!CanSurfaceBeWallran(Hit.ImpactNormal)) {
		return;
	}

	characterStatus.lastValidHit = Hit;
	UpdateWallInfo();
	// UCustomUtils::Print("Update HIT from OnHit");
}

void ACharacterController::Landed(const FHitResult& Hit) {
	// UCustomUtils::Print("Landed unreal event");
}

#pragma endregion

#pragma region InputHandlingFunctions

void ACharacterController::ResetWallrunTimer() {
	characterStatus.wallrunTimerExpired=true;
	characterStatus.wallrunMoveDirection=FVector::ZeroVector;
}

void ACharacterController::ReadMoveForwardInput(float value) {
	inputValues.moveInput.X=value;
}

void ACharacterController::ReadMoveSidewardInput(float value) {
	inputValues.moveInput.Y=value;
}

void ACharacterController::TurnCamera(float Rate) {
	AddControllerYawInput(Rate * cameraRotationSpeed * GetWorld()->GetDeltaSeconds());
}

void ACharacterController::LookUpCamera(float Rate) {
	AddControllerPitchInput(Rate * cameraRotationSpeed * GetWorld()->GetDeltaSeconds());
}

void ACharacterController::ReadJumpInputStart() {
	inputValues.bJumpInput=true;
}

void ACharacterController::ReadJumpInputEnd() {
	inputValues.bJumpInput=false;
}

void ACharacterController::ReadSprintInputStart() {
	inputValues.bWallrunInput=true;
}

void ACharacterController::ReadSprintInputEnd() {
	inputValues.bWallrunInput=false;
}

#pragma endregion

#pragma region MovementFunctions

void ACharacterController::ApplyGroundMovement() {
	if(inputValues.moveInput.Size() != 0.f) {
		AddMovementInput(characterStatus.moveDirection, inputValues.moveInput.Size());
		
	}else {
		characterStatus.moveDirection=FVector::ZeroVector;
	}
}

void ACharacterController::ApplyAirMovement() {
	if(inputValues.moveInput.Size() != 0.f) {
		FVector SidewardMovement=(inputValues.moveInput.X) * characterStatus.characterSideward;
		FVector ForwardMovement=inputValues.moveInput.Y * characterStatus.characterForward;
		
		characterStatus.moveDirection=(ForwardMovement + SidewardMovement).GetSafeNormal();

		AddMovementInput(characterStatus.moveDirection, inputValues.moveInput.Size());
		
	}else {
		characterStatus.moveDirection=FVector::ZeroVector;
	}


}

void ACharacterController::ApplyWallrunMovement() {
	if(inputValues.moveInput.Size() != 0.f) {
		

		FVector wallrunVelocity=characterStatus.wallrunMoveDirection*Movement->MaxFlySpeed;
		// SetVelocity(wallrunVelocity);
		SetHorizontalVelocity(wallrunVelocity);

		// FHitResult Hit;
		// GetMovementComponent()->SlideAlongSurface(
		// 	characterStatus.moveDirectionAlongWallAxis*Movement->MaxFlySpeed*100.f, 
		// 	1.f-characterStatus.lastValidHit.Time, 
		// 	characterStatus.lastValidHit.ImpactNormal,
		// 	Hit
		// 	);

		const FVector SidewardMovementAlongWallAxis=-inputValues.moveInput.Y * characterStatus.wallSideward;
		const FVector UpwardMovementAlongWallAxis=inputValues.moveInput.X * characterStatus.wallUpward;
		characterStatus.moveDirectionAlongWallAxis=(UpwardMovementAlongWallAxis + SidewardMovementAlongWallAxis).GetSafeNormal();
	}else {
		// characterStatus.wallrunMoveDirection=FVector::ZeroVector;
		characterStatus.moveDirectionAlongWallAxis=FVector::ZeroVector;
	}
}

#pragma endregion

#pragma region JumpFunctions

void ACharacterController::ApplyGroundJump() {
	UCustomUtils::Print("Ground Jump");

	inputValues.bJumpInput=false;

	FVector launchDirection=FVector::UpVector;

	FVector launchVelocity=launchDirection * Movement->JumpZVelocity;

	LaunchCharacter(launchVelocity, false, true); 
}

void ACharacterController::ApplyAirJump() {
	UCustomUtils::Print("Air Jump");

	inputValues.bJumpInput=false;

	FVector launchDirection=(characterStatus.moveDirection+FVector::UpVector).GetSafeNormal();

	FVector launchVelocity=launchDirection * Movement->JumpZVelocity;

	LaunchCharacter(launchVelocity, false, true); 
}

void ACharacterController::ApplyWallrunJump() {
	UCustomUtils::Print("Wallrun Jump");

	// ResetHitAndWallInfo();
	inputValues.bJumpInput=false;
	
	FVector wallVerticalAxis;
	switch (characterStatus.wallrunSide) {
		case EWallrunSide::Left:
			wallVerticalAxis=FVector(0.f, 0.f, 1.f);
			break;
		case EWallrunSide::Right:
			wallVerticalAxis=FVector(0.f, 0.f, -1.f);
			break;
	}
	
	FVector awayFromWallDirection=FVector::CrossProduct(characterStatus.wallrunMoveDirection, wallVerticalAxis).GetSafeNormal();
	//
	// awayFromWallDirection=characterStatus.moveDirection;
	// awayFromWallDirection.Y *= -1;

	FVector launchDirection=(awayFromWallDirection+FVector::UpVector).GetSafeNormal();

	FVector launchVelocity=launchDirection * Movement->MaxFlySpeed * 2.f;

	LaunchCharacter(launchVelocity, false, true); 
}

void ACharacterController::GroundLeft() {
	characterStatus.bIsGrounded=false;
}

void ACharacterController::GroundLand() {
	characterStatus.bIsGrounded=true;
	ResetJumpCount(jumpsMax);
}

void ACharacterController::WallrunLand() {
	characterStatus.bIsGrounded=true;
	ResetJumpCount(jumpsMax-1);
}

bool ACharacterController::ConsumeJump() {
	if(characterStatus.bIsWallrunning) { //always jump if wallrunning, even with 0 jumps left
		return true;
	}
	
	if(characterStatus.jumpsLeft > 0) {
		characterStatus.jumpsLeft--;
		return true;
	}
	
	return false;
}

void ACharacterController::ResetJumpCount(int jumps) {
	characterStatus.jumpsLeft=FMath::Clamp(jumps, 0, jumpsMax);
}

#pragma endregion

#pragma region WallrunFunctions

bool ACharacterController::CanSurfaceBeWallran(FVector surfaceNormal) {
	FVector upDir=FVector::UpVector;
	float dotThreshold=0.80f;
	float dotNormalUp=FVector::DotProduct(surfaceNormal, upDir);
	//check similarity between impact normal and up direction
	if(dotNormalUp > dotThreshold || dotNormalUp < -dotThreshold) {
		// UCustomUtils::Print("Impact normal NOT valid: " + FString::SanitizeFloat(dotNormalUp));
		return false;
	}

	//da togliere, ridondante
	float thresholdZ = -0.05;
	if(surfaceNormal.Z < thresholdZ) {
		return false; //non wallrunnare su superfici rivolte verso il basso
	}

	FVector horizontalSurfaceNormal=FVector(surfaceNormal.X, surfaceNormal.Y, 0.f).GetSafeNormal();
	float surfaceSlope = FVector::DotProduct(surfaceNormal, horizontalSurfaceNormal);

	float surfaceAngle=FMath::Acos(surfaceSlope);

	return ( surfaceAngle < Movement->GetWalkableFloorAngle() );
		
}

bool ACharacterController::CanWallrun() {
	if(!characterStatus.wallrunTimerExpired) {
		return false;
	}

	if(!characterStatus.lastValidHit.bBlockingHit) {
		// UCustomUtils::Print("Cannot wallrun: no hit", 10);
		return false;
	}

	UpdateWallrunSide();
	if(!MovingTowardsWallForRun()) {
		// UCustomUtils::Print("Cannot wallrun: keys not valid", 10);
		return false;
	}
	
	return true;
}

bool ACharacterController::ShouldEndWallrun() {
	if(!MovingTowardsWallForRun()) {
		// EndWallrun(EWallrunEndreason::Fall);
		SetLastEndreason(EWallrunEndreason::WrongDirection);
		return true;
	}


	if(!characterStatus.lastValidHit.bBlockingHit) {
		SetLastEndreason(EWallrunEndreason::NoWallhit);
		return true;
	}

	if(characterStatus.startingWallrunSide != characterStatus.wallrunSide) {
		UCustomUtils::Print("Side changed during wallrun");
		// EndWallrun(EWallrunEndreason::Fall);
		SetLastEndreason(EWallrunEndreason::SideChange);
		return true;
	}
	
	// if(!UpdateWallrunAndInfoIfRayHit()) {
	// 	return true;
	// }

	return false;
}

void ACharacterController::UpdateWallrunAndInfoIfRayHit() {


	FVector vecToWall;

	if(characterStatus.wallrunSide==EWallrunSide::Right) {
		characterStatus.playerToWallDirection=FVector::CrossProduct(characterStatus.wallrunMoveDirection, FVector::UpVector).GetSafeNormal();
	}else {
		characterStatus.playerToWallDirection=FVector::CrossProduct(characterStatus.wallrunMoveDirection, FVector::DownVector).GetSafeNormal();
	}
	
	vecToWall=characterStatus.playerToWallDirection*checkWallRayLEngth;
	
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this);

	FHitResult Hit;
	if( GetWorld()->LineTraceSingleByChannel(
		Hit, 
		GetActorLocation(), 
		GetActorLocation()+vecToWall,
		ECC_Visibility,
		collisionParams,
		FCollisionResponseParams::DefaultResponseParam ) 
		) 
	{
		characterStatus.lastValidHit=Hit;
		UpdateWallInfo();

		UpdateWallrunSide();
		UpdateWallrunDirection();
		// UCustomUtils::Print("Update HIT from Ray");
			
	}
	else {
		ResetHitAndWallInfo();

	}

	
}

void ACharacterController::BeginWallrun() {
	characterStatus.bIsWallrunning=true;

	UpdateWallrunSide();
	UpdateWallrunDirection();

	Movement->AirControl=1;
	Movement->GravityScale=0;
	Movement->SetPlaneConstraintNormal(FVector::UpVector);
	
	inputValues.bJumpInput=false;
	characterStatus.startingWallrunSide=characterStatus.wallrunSide;

}

void ACharacterController::EndWallrun() {
	EWallrunEndreason endreason = characterStatus.lastEndReason;
	UCustomUtils::Print("Wallrun end cause of: " + UEnum::GetDisplayValueAsText(endreason).ToString());

	characterStatus.bWasWallrunning=true;
	characterStatus.bIsWallrunning=false;
	Movement->AirControl=initialAirControl;
	Movement->GravityScale=1;
	Movement->SetPlaneConstraintNormal(FVector::ZeroVector);

	if(characterStatus.lastValidHit.bBlockingHit) {
			ResetHitAndWallInfo();
	}

	characterStatus.wallrunTimerExpired=false;
	GetWorldTimerManager().SetTimer(wallrunDelayTimer, this, &ACharacterController::ResetWallrunTimer, wallrunDelay);
	// characterStatus.lastValidHit=FHitResult();
}



void ACharacterController::UpdateWallrunSide() {
	FVector2D wallNormal2D=FVector2D(characterStatus.wallNormal);
	FVector2D characterAxis2D=FVector2D(characterStatus.characterForward);

	float dotSide=FVector2D::DotProduct(wallNormal2D, characterAxis2D);

	// UCustomUtils::Print("Wallside dot: " + FString::SanitizeFloat(dotSide));

	if(dotSide>0.f) {
		characterStatus.wallrunSide=EWallrunSide::Right;
	}else {
		characterStatus.wallrunSide=EWallrunSide::Left;
	}
}

void ACharacterController::UpdateWallrunDirection() {
	FVector sideVerticalDirection;

	if(characterStatus.wallrunSide==EWallrunSide::Right) {
		sideVerticalDirection=FVector::UpVector;
	}else {
		sideVerticalDirection=FVector::DownVector;
	}

	// characterStatus.moveDirection=FVector::CrossProduct(characterStatus.wallNormal, sideVerticalDirection).GetSafeNormal();
	characterStatus.wallrunMoveDirection=FVector::CrossProduct(characterStatus.wallNormal, sideVerticalDirection).GetSafeNormal();

	

	// Movement->SetPlaneConstraintNormal(characterStatus.wallNormal);
}

bool ACharacterController::MovingTowardsWallForRun() {
	if(inputValues.moveInput.X < -0.1f || inputValues.moveInput.IsNearlyZero()) {
		// UCustomUtils::Print("Keys not valid for wallrun");
		return false;
	}
	//
	// bool forwardPressed=(inputValues.moveInput.X>0.1f); 
	//
	// if(!forwardPressed) {
	// 	return false;
	// }
	//

	// float dotValue=FVector::DotProduct(-characterStatus.moveDirection, characterStatus.wallNormal);
	// UCustomUtils::Print(dotValue);

	// if(dotValue<=0.25) {
	// 	return false;
	// }
	//
	// return true;

	bool correctSidewardKeyPressed;
	switch (characterStatus.wallrunSide) {
	case EWallrunSide::Right:
		correctSidewardKeyPressed=(inputValues.moveInput.Y<-0.1f);
		break;
	
	case EWallrunSide::Left:
		correctSidewardKeyPressed=(inputValues.moveInput.Y>0.1f);
		break;
	}
	
	if(!correctSidewardKeyPressed) {
		return false;
	}
	
	return true;
}

#pragma endregion

#pragma region StatusFunctions

void ACharacterController::UpdateCharacterAxis() {
	characterStatus.characterRotation=Controller->GetControlRotation();
	const FRotator YawRotation(0, characterStatus.characterRotation.Yaw, 0);

	characterStatus.characterSideward = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	characterStatus.characterForward = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	// FVector lookingDir=FVector(Camera->GetComponentRotation().Vector());
	// characterStatus.lookingDirection = lookingDir.GetSafeNormal();

}

void ACharacterController::ClampVelocity() {

}

void ACharacterController::PlatformOverlap() {
	characterStatus.bIsOverlappingPlatform=true;
	characterStatus.overlapBodyCount += 1;
}

void ACharacterController::PlatformOverlapLeft() {
	characterStatus.overlapBodyCount -= 1;
	if(characterStatus.overlapBodyCount<=0) {

		characterStatus.bIsOverlappingPlatform=false;

		if(characterStatus.lastValidHit.bBlockingHit) {
			ResetHitAndWallInfo();
		}
	}
}

void ACharacterController::UpdateWallInfo() {
	FHitResult Hit=characterStatus.lastValidHit;

	characterStatus.wallNormal=Hit.ImpactNormal;
	characterStatus.wallSideward=FVector::CrossProduct(characterStatus.wallNormal, FVector::UpVector).GetSafeNormal();
	characterStatus.wallUpward=FVector::CrossProduct(characterStatus.wallSideward, characterStatus.wallNormal).GetSafeNormal();
}

void ACharacterController::ResetHitAndWallInfo() {
	UCustomUtils::Print("No more hit detedcted, reset Hit");

	characterStatus.lastValidHit = FHitResult();

	characterStatus.wallNormal=FVector::ZeroVector;
	characterStatus.wallSideward=FVector::ZeroVector;
	characterStatus.wallUpward=FVector::ZeroVector;

	// characterStatus.wallrunMoveDirection=FVector::ZeroVector;
	// characterStatus.moveDirectionAlongWallAxis=FVector::ZeroVector;
	characterStatus.playerToWallDirection=FVector::ZeroVector;
}

void ACharacterController::UpdateMoveDirection() {
	if(inputValues.moveInput.Size() != 0.f) {

		FVector SidewardMovement=inputValues.moveInput.X * characterStatus.characterSideward;
		FVector ForwardMovement=inputValues.moveInput.Y * characterStatus.characterForward;
		
		characterStatus.moveDirection=(ForwardMovement + SidewardMovement).GetSafeNormal();
		
		
	}else {
		characterStatus.moveDirection=FVector::ZeroVector;
	}
}

void ACharacterController::SetHorizontalVelocity(FVector velocity) {
	Movement->Velocity=FVector(velocity.X, velocity.Y, GetVelocity().Z);
}

void ACharacterController::SetVelocity(FVector velocity) {
	Movement->Velocity=velocity;
}

void ACharacterController::ClampHorizontalVelocity() {
	if(Movement->IsFalling()) {
		float currentToMaxRatio=GetHorizontalVelocity().Size() / Movement->MaxFlySpeed;
		if(currentToMaxRatio>1) {
			FVector velocity=GetHorizontalVelocity()/currentToMaxRatio;
			SetHorizontalVelocity(velocity);
		}
	}
}

#pragma endregion

