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

	StateMachine=CreateDefaultSubobject<UStateMachineComponent>("State Machine");
	
	characterStatus.bIsGrounded=true;
	wallInfo.wallrunTimerExpired=true;

	wallInfo.wallrunSide=EWallrunSide::None;
	wallInfo.wallrunMode=EWallrunMode::None;
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
	checkWallRayLength=Capsule->GetScaledCapsuleRadius() * 3.f;
	wallInfo.wallrunSide=EWallrunSide::None;
	wallInfo.wallrunMode=EWallrunMode::None;
	characterStatus.stamina=maxStamina;
}

void ACharacterController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(!characterStatus.bIsWallrunning) {
		RecoverStamina();
	}else {
		ConsumeStamina();
	}
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
	if(characterStatus.bIsWallrunning || !wallInfo.wallrunTimerExpired) {
		return;
	}

	if(!CanSurfaceBeWallran(Hit.ImpactNormal)) {
		return;
	}

	// UCustomUtils::Print("Object OnHit: " + Hit.GetActor()->GetActorNameOrLabel());
	characterStatus.currentValidHit = Hit;
	UpdateWallInfo();
	// wallInfo.wallNormal=Hit.ImpactNormal;
	// UpdateWallrunAndInfoIfRayHit();
}

void ACharacterController::Landed(const FHitResult& Hit) {
	
}

#pragma endregion

#pragma region InputHandlingFunctions

void ACharacterController::ReadMoveForwardInput(float value) {
	inputValues.moveInput.X=value;

	UpdateMoveDirection();
	UpdateWallrunModeOnInputKeys();
}

void ACharacterController::ReadMoveSidewardInput(float value) {
	inputValues.moveInput.Y=value;

	UpdateMoveDirection();
	UpdateWallrunModeOnInputKeys();
}

void ACharacterController::TurnCamera(float Rate) {
	AddControllerYawInput(Rate * cameraRotationSpeed * GetWorld()->GetDeltaSeconds());

	UpdateCharacterAxis();
}

void ACharacterController::LookUpCamera(float Rate) {
	AddControllerPitchInput(Rate * cameraRotationSpeed * GetWorld()->GetDeltaSeconds());

	UpdateCharacterAxis();
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

		// SetVelocity(MoveTowardsVector(GetVelocity(), characterStatus.moveDirection * Movement->MaxWalkSpeed, movementAcceleration));
	}
}

void ACharacterController::ApplyAirMovement() {
	if(inputValues.moveInput.Size() != 0.f) {
		AddMovementInput(characterStatus.moveDirection, inputValues.moveInput.Size());
	}
}

void ACharacterController::ApplyWallrunMovement() {
	if(inputValues.moveInput.Size() != 0.f) {
		FVector wallrunVelocity;
		wallrunVelocity=wallInfo.wallrunMoveDirection*Movement->MaxCustomMovementSpeed;
		

		if(characterStatus.currentValidHit.Distance > Capsule->GetScaledCapsuleRadius()*1.05f) {
			if(characterStatus.bShouldSnapToWall) {
				StickToWall();
			}

			SetVelocity(wallrunVelocity);
		}else {
			SetVelocity(MoveTowardsVector(
			GetVelocity(),
			wallrunVelocity, 
				movementAcceleration)
			);
		}

		
	}
}

#pragma endregion

#pragma region JumpFunctions

void ACharacterController::ApplyGroundJump() {
	UCustomUtils::Print("Ground Jump");

	inputValues.bJumpInput=false;

	FVector launchDirection=FVector::UpVector;

	FVector launchVelocity=launchDirection * Movement->JumpZVelocity;

	StartWallrunDelayTimer(wallrunDelay);

	LaunchCharacter(launchVelocity, false, true); 
}

void ACharacterController::ApplyAirJump() {
	UCustomUtils::Print("Air Jump");

	inputValues.bJumpInput=false;

	FVector launchDirection=(characterStatus.moveDirection+FVector::UpVector).GetSafeNormal();

	FVector launchVelocity=launchDirection * Movement->JumpZVelocity;

	StartWallrunDelayTimer(wallrunDelay);

	LaunchCharacter(launchVelocity, false, true); 
}

void ACharacterController::ApplyWallrunJump() {
	UCustomUtils::Print("Wallrun Jump");
	
	inputValues.bJumpInput=false;

	FVector wallNormal=wallInfo.wallNormal;
	if(wallNormal.IsNearlyZero()) {
		wallNormal=characterStatus.lastValidNormal;
	}
	
	FVector launchDirection=(wallNormal+FVector::UpVector).GetSafeNormal();

	FVector launchVelocity=launchDirection * Movement->MaxFlySpeed * 2.f;

	LaunchCharacter(launchVelocity, false, true);

	ConsumeStamina(false);
}

void ACharacterController::ApplyWallrunEndingJump() {
	UCustomUtils::Print("WallrunENDING Jump");

	inputValues.bJumpInput=false;

	FVector launchDirection=FVector::UpVector;

	FVector launchVelocity=launchDirection * Movement->JumpZVelocity * 0.75f;

	StartWallrunDelayTimer(wallrunDelay);

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
	ResetJumpCount(FMath::Max(1,jumpsMax-1));
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
	// FVector upDir=FVector::UpVector;
	// float dotThreshold=0.80f;
	// float dotNormalUp=FVector::DotProduct(surfaceNormal, upDir);
	//
	// //check similarity between impact normal and up direction
	// if(dotNormalUp > dotThreshold || dotNormalUp < -dotThreshold) {
	// 	return false;
	// }

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
	if(!wallInfo.wallrunTimerExpired) {
		return false;
	}

	if(!HasValidHit()) {
		return false;
	}

	// UCustomUtils::Print("raycheck in can wallrun");

	if(!RaycastInMoveDirection()) {
		ResetHitAndWallInfo();
		return false;
	}
	
	// UpdateWallrunSide();
	if(!MoveDirectionTowardsWall()) {
		return false;
	}

	if(wallInfo.wallrunMode==EWallrunMode::None) {
		return false;
	}

	if(wallInfo.wallrunSide==EWallrunSide::Front && wallInfo.wallrunMode==desiredHorizontalMode) {
		return false;
	}

	return true;
}

bool ACharacterController::ShouldEndWallrun() {
	if(!HasValidHit()) {
		// UCustomUtils::Print("should end wallrun: no hit");
		SetLastEndreason(EWallrunEndreason::NoHit);
		return true;
	}
	//
	// if(wallInfo.wallNormal.IsNearlyZero()) {
	// 	UCustomUtils::Print("should end wallrun: normale nulla");
	// 	SetLastEndreason(EWallrunEndreason::NoHit);
	// 	return true;
	// }

	if(characterStatus.lookingDirection.Z < -0.55f && wallInfo.wallrunMode!=desiredHorizontalMode) {
		// UCustomUtils::Print("should end wallrun: no hit");
		SetLastEndreason(EWallrunEndreason::Fall);
		return true;
	}

	if(!MoveDirectionTowardsWall()) {
		// UCustomUtils::Print("should end wallrun: not moving towards wall");
		SetLastEndreason(EWallrunEndreason::WrongDirection);
		return true;
	}

	
	if(wallInfo.startingLateralWallSide != wallInfo.wallrunSide && wallInfo.wallrunSide!=EWallrunSide::Front) {
		SetLastEndreason(EWallrunEndreason::SideChange);
		return true;
	}

	if(wallInfo.wallrunMode==EWallrunMode::None) {
		SetLastEndreason(EWallrunEndreason::WrongMode);
		return true;
	}
	
	if(wallInfo.wallrunSide==EWallrunSide::Front && wallInfo.wallrunMode==desiredHorizontalMode) {
		SetLastEndreason(EWallrunEndreason::WrongMode);
		return true;
	}

	return false;
}

void ACharacterController::UpdateWallrunModeOnInputKeys() {
	if(inputValues.moveInput.IsNearlyZero() || inputValues.moveInput.X < -0.1f) {
		return;
	}

	if(inputValues.moveInput.Y != 0.f) {
		if(inputValues.moveInput.X != 0) {
			// premo W + A o D
			wallInfo.wallrunMode=desiredDiagonalMode;
			
		}else{
			// premo A o D
			wallInfo.wallrunMode=desiredHorizontalMode;
			
		
		}
		
	}else {
		// premo W
		wallInfo.wallrunMode=desiredVerticalMode;
		
	}
	
}

void ACharacterController::UpdateWallrunSide() {
	//2D per il casi di muri inclinati
	FVector2D wallNormal2D=FVector2D(wallInfo.wallNormal);
	FVector2D characterSideward2D=FVector2D(characterStatus.characterSideward);
	// FVector2D characterForward2D=FVector2D(characterStatus.characterForward);
	
	float dotSideward=FVector2D::DotProduct(wallNormal2D, characterSideward2D);
	// float dotForward=FVector2D::DotProduct(-wallNormal2D, characterForward2D);
	float absDotSideward=FMath::Abs(dotSideward);
	// float sideChangeTolerance=0.05f;
	// float sideChangeThreshold=0.75f;
	
	
	switch (wallInfo.wallrunSide) {
		case EWallrunSide::Right:
			if(dotSideward < 0) {
				wallInfo.wallrunSide=EWallrunSide::Left;
			}

			break;
		
		case EWallrunSide::Left:
			if(dotSideward > 0) {
				wallInfo.wallrunSide=EWallrunSide::Right;
			}

			break;

		case EWallrunSide::Front:
			if(dotSideward < -frontSideThreshold) {
				wallInfo.wallrunSide=EWallrunSide::Left;
			}
			else if(dotSideward > frontSideThreshold) {
				wallInfo.wallrunSide=EWallrunSide::Right;
			}

			break;

		default:
			if(absDotSideward < frontSideThreshold) {
				wallInfo.wallrunSide=EWallrunSide::Front;
				wallInfo.startingLateralWallSide=EWallrunSide::Front;
			}
			else if(dotSideward < 0) {
				wallInfo.wallrunSide=EWallrunSide::Left;
				wallInfo.startingLateralWallSide=EWallrunSide::Left;
			}
			else {
				wallInfo.wallrunSide=EWallrunSide::Right;
				wallInfo.startingLateralWallSide=EWallrunSide::Right;
			}

			break;
	}

	// float sideChangeThreshold=0.25f;
	// switch (wallInfo.wallrunSide) {
	// 	case EWallrunSide::Right:
	// 		if(absDotSideward < sideChangeThreshold) {
	// 			wallInfo.wallrunSide=EWallrunSide::Front;
	// 		}
	//
	// 		break;
	// 	
	// 	case EWallrunSide::Left:
	// 		if(absDotSideward < sideChangeThreshold) {
	// 			wallInfo.wallrunSide=EWallrunSide::Front;
	// 		}
	//
	// 		break;
	//
	// 	case EWallrunSide::Front:
	// 		if(dotSideward < -sideChangeThreshold) {
	// 			wallInfo.wallrunSide=EWallrunSide::Left;
	//
	// 			if(wallInfo.startingLateralWallSide==EWallrunSide::None) {
	// 				wallInfo.startingLateralWallSide=EWallrunSide::Left;
	// 			}
	// 		}
	// 		else if(dotSideward > sideChangeThreshold) {
	// 			wallInfo.wallrunSide=EWallrunSide::Right;
	//
	// 			if(wallInfo.startingLateralWallSide==EWallrunSide::None) {
	// 				wallInfo.startingLateralWallSide=EWallrunSide::Right;
	// 			}
	// 		}
	//
	// 		break;
	//
	// 	default:
	// 		if(absDotSideward < sideChangeThreshold) {
	// 			wallInfo.wallrunSide=EWallrunSide::Front;
	// 			wallInfo.startingLateralWallSide=EWallrunSide::None;
	// 		}
	// 		else if(dotSideward < 0) {
	// 			wallInfo.wallrunSide=EWallrunSide::Left;
	// 			wallInfo.startingLateralWallSide=EWallrunSide::Left;
	// 		}
	// 		else {
	// 			wallInfo.wallrunSide=EWallrunSide::Right;
	// 			wallInfo.startingLateralWallSide=EWallrunSide::Right;
	// 		}
	//
	// 		break;
	// }
	
}

void ACharacterController::UpdateWallrunDirection() {
	FVector sideVerticalDirection;
	FVector SidewardMovementAlongWallAxis;
	FVector UpwardMovementAlongWallAxis;

	switch (wallInfo.wallrunMode) {
		case EWallrunMode::Horizontal:
			if(wallInfo.wallrunSide==EWallrunSide::Right) {
				sideVerticalDirection=FVector::UpVector;
			}else {
				sideVerticalDirection=FVector::DownVector;
			}

			wallInfo.wallrunMoveDirection=FVector::CrossProduct(wallInfo.wallNormal, sideVerticalDirection).GetSafeNormal();
			break;

		case EWallrunMode::Vertical:
			wallInfo.wallrunMoveDirection=wallInfo.wallUpward;
			break;

		case EWallrunMode::Diagonal:
			SidewardMovementAlongWallAxis=-inputValues.moveInput.Y * wallInfo.wallSideward;
			UpwardMovementAlongWallAxis=inputValues.moveInput.X * wallInfo.wallUpward;
			wallInfo.moveDirectionAlongWallAxis=(UpwardMovementAlongWallAxis + SidewardMovementAlongWallAxis).GetSafeNormal();

			// FVector::MirrorByPlane()
			

			wallInfo.wallrunMoveDirection=wallInfo.moveDirectionAlongWallAxis;
			break;

		case EWallrunMode::Visual:
			wallInfo.lookingMoveDirectionAlongWallAxis=FVector::VectorPlaneProject(characterStatus.lookingDirection, wallInfo.wallNormal).GetSafeNormal();

			wallInfo.lookingMoveDirectionAlongWallAxis.Z = FMath::Max(minimumVisualWallrunDirectionVerticalValue, wallInfo.lookingMoveDirectionAlongWallAxis.Z);
			// wallInfo.lookingMoveDirectionAlongWallAxis.X=FMath::Clamp(wallInfo.lookingMoveDirectionAlongWallAxis.X, -0.5f, 0.5f);

			wallInfo.wallrunMoveDirection=wallInfo.lookingMoveDirectionAlongWallAxis;
			break;

		default:
			break;
	}
}

bool ACharacterController::MoveDirectionTowardsWall() {
	if(inputValues.moveInput.X < -0.1f) {
		return false;
	}
	
	bool correctMoveDirection;

	if(inputValues.moveInput.IsNearlyZero()) {
		correctMoveDirection = false;
	}
	else {
		float dotVal=FVector::DotProduct(-wallInfo.wallNormal, characterStatus.moveDirection);

		if(dotVal>0.15f) {
			correctMoveDirection=true;
		}else {
			correctMoveDirection=false;
		}
	}

	return correctMoveDirection;
}

bool ACharacterController::MoveKeysTowardsWall() {
	if(inputValues.moveInput.X < -0.1f) {
		return false;
	}

	bool correctMoveKeys = false;

	if(inputValues.moveInput.IsNearlyZero()) {
		correctMoveKeys = false;
	}
	else {
		bool correctMoveKeyPressed;
		
		switch (wallInfo.wallrunSide) {
			case EWallrunSide::Right:
				correctMoveKeyPressed=(inputValues.moveInput.Y<-0.1f);
				break;
			
			case EWallrunSide::Left:
				correctMoveKeyPressed=(inputValues.moveInput.Y>0.1f);
				break;
		
			case EWallrunSide::Front:
				correctMoveKeyPressed=(inputValues.moveInput.X>0.1f);
				break;
		}
		
		if(correctMoveKeyPressed) {
			correctMoveKeys = true;
		}
		else {
			correctMoveKeys=false;
		}
		
	}

	return correctMoveKeys;
}

void ACharacterController::UpdateWallrunAndInfoIfRayHit() {
	// UpdateWallrunSide();

	FVector vecToWall;
	vecToWall=(-wallInfo.wallNormal)*checkWallRayLength;
	vecToWall = GetActorLocation()+vecToWall;

	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this);

	FHitResult Hit;
	if(RaycastFromCapsule(Hit, vecToWall))
	{

		// UCustomUtils::Print("Update HIT from RayHit");
		characterStatus.currentValidHit=Hit;
		UpdateWallInfo();
		
		UpdateWallrunSide();
		UpdateWallrunDirection();

	}
	else {
		ResetHitAndWallInfo();
	}
}

void ACharacterController::BeginWallrun() {
	characterStatus.bIsWallrunning=true;

	// UpdateWallrunModeOnInputKeys();
	UpdateWallrunSide();
	UpdateWallrunDirection();

	Movement->AirControl=1;
	Movement->GravityScale=0;

	//remove vertical velocity component at start
	SetVelocity(GetHorizontalVelocity());

	// Movement->SetPlaneConstraintNormal(FVector::UpVector);
	// Movement->SetPlaneConstraintNormal(FVector::ZeroVector);
	
	wallInfo.startingLateralWallSide=wallInfo.wallrunSide;
}

void ACharacterController::EndWallrun() {
	EWallrunEndreason endreason = wallInfo.lastEndReason;
	
	characterStatus.bIsWallrunning=false;
	Movement->AirControl=initialAirControl;
	Movement->GravityScale=1;

	wallInfo.wallrunSide=EWallrunSide::None;
	wallInfo.startingLateralWallSide=EWallrunSide::None;
	// Movement->SetPlaneConstraintNormal(FVector::ZeroVector);

	ResetHitAndWallInfo();
	
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

void ACharacterController::ResetWallrunTimer() {
	wallInfo.wallrunTimerExpired=true;
}

void ACharacterController::KeysTimerFinished() {
	wallInfo.wrongKeysTimeElapsed=true;
	GetWorldTimerManager().ClearTimer(keysDelayTimer);
}

void ACharacterController::ActivateWrongKeysTimer() {
	if(!(GetWorldTimerManager().IsTimerActive(keysDelayTimer))) {
		wallInfo.wrongKeysTimeElapsed=false;
		GetWorldTimerManager().SetTimer(keysDelayTimer, this, &ACharacterController::KeysTimerFinished, wrongMoveKeysDelay);
	}
}

void ACharacterController::ClearWrongKeysTimer() {
	if(GetWorldTimerManager().IsTimerActive(keysDelayTimer)) {
		wallInfo.wrongKeysTimeElapsed=true;
		GetWorldTimerManager().ClearTimer(keysDelayTimer);
	}
}

void ACharacterController::StartWallrunDelayTimer(float time) {
	wallInfo.wallrunTimerExpired=false;
	GetWorldTimerManager().SetTimer(wallrunDelayTimer, this, &ACharacterController::ResetWallrunTimer, time);
}

void ACharacterController::StickToWall() {
	// UCustomUtils::Print("Stick to wall activated");

	float distance=characterStatus.currentValidHit.Distance - Capsule->GetScaledCapsuleRadius();
	FVector snap=-wallInfo.wallNormal * distance * 0.95f;
	FVector adjustedPosition=GetActorLocation()+snap;

	SetActorLocation(adjustedPosition, false);
}

#pragma endregion

#pragma region StatusFunctions

void ACharacterController::UpdateCharacterAxis() {
	characterStatus.characterRotation=Controller->GetControlRotation();
	const FRotator YawRotation(0, characterStatus.characterRotation.Yaw, 0);

	characterStatus.characterSideward = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	characterStatus.characterForward = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

	characterStatus.lookingDirection = Camera->GetComponentRotation().Vector();
}

void ACharacterController::UpdateMoveDirection() {
	if(inputValues.moveInput.Size() != 0.f) {

		FVector SidewardMovement=inputValues.moveInput.Y * characterStatus.characterSideward;
		FVector ForwardMovement=inputValues.moveInput.X * characterStatus.characterForward;
		characterStatus.moveDirection=(ForwardMovement + SidewardMovement).GetSafeNormal();

		// if(HasValidHit()) {
		// 	const FVector SidewardMovementAlongWallAxis=-inputValues.moveInput.Y * wallInfo.wallSideward;
		// 	const FVector UpwardMovementAlongWallAxis=inputValues.moveInput.X * wallInfo.wallUpward;
		// 	wallInfo.moveDirectionAlongWallAxis=(UpwardMovementAlongWallAxis + SidewardMovementAlongWallAxis).GetSafeNormal();
		//
		// 	wallInfo.lookingMoveDirectionAlongWallAxis=FVector::VectorPlaneProject(characterStatus.lookingDirection, wallInfo.wallNormal).GetSafeNormal();
		// 	wallInfo.lookingMoveDirectionAlongWallAxis.Z = FMath::Max(minimumVisualWallrunDirectionVerticalValue, wallInfo.lookingMoveDirectionAlongWallAxis.Z);
		// }else {
		// 	wallInfo.moveDirectionAlongWallAxis=FVector::ZeroVector;
		// 	wallInfo.lookingMoveDirectionAlongWallAxis=FVector::ZeroVector;
		// }
		
		
	}else {
		characterStatus.moveDirection=FVector::ZeroVector;
		// wallInfo.moveDirectionAlongWallAxis=FVector::ZeroVector;
		// wallInfo.lookingMoveDirectionAlongWallAxis=FVector::ZeroVector;

		
	}
}

void ACharacterController::ClampVelocity() {
	if(Movement->IsFalling()) {
		float currentToMaxRatio=GetVelocity().Size() / Movement->MaxFlySpeed;
		if(currentToMaxRatio>1) {
			FVector velocity=GetVelocity()/currentToMaxRatio;
			SetVelocity(velocity);
		}
	}
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

void ACharacterController::PlatformOverlap() {
	characterStatus.bIsOverlappingPlatform=true;
	characterStatus.overlapBodyCount += 1;
}

void ACharacterController::PlatformOverlapLeft() {
	characterStatus.overlapBodyCount -= 1;
	if(characterStatus.overlapBodyCount<=0) {

		characterStatus.bIsOverlappingPlatform=false;

		ResetHitAndWallInfo();
		
	}
}

bool ACharacterController::HasValidHit() {
	return (characterStatus.currentValidHit.bBlockingHit); // && (!wallInfo.wallNormal.IsNearlyZero());
}

bool ACharacterController::RaycastFromCapsule(FHitResult& Hit, FVector End) {
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this);

	return GetWorld()->LineTraceSingleByChannel(
		Hit, 
		GetActorLocation(), 
		End,
		ECC_Visibility,
		collisionParams,
		FCollisionResponseParams::DefaultResponseParam );
}

void ACharacterController::UpdateWallInfo() {
	// UCustomUtils::Print("UPDATE WALL INFO");
	characterStatus.lastValidNormal=wallInfo.wallNormal;

	wallInfo.wallNormal=characterStatus.currentValidHit.ImpactNormal;
	wallInfo.wallSideward=FVector::CrossProduct(wallInfo.wallNormal, FVector::UpVector).GetSafeNormal();
	wallInfo.wallUpward=FVector::CrossProduct(wallInfo.wallSideward, wallInfo.wallNormal).GetSafeNormal();
}

void ACharacterController::ResetHitAndWallInfo() {
	// UCustomUtils::Print("RESET WALL INFO");
	if(!HasValidHit()) {
		return;
	}
	
	characterStatus.lastValidNormal=wallInfo.wallNormal;

	characterStatus.currentValidHit = FHitResult();

	wallInfo.wallNormal=FVector::ZeroVector;
	wallInfo.wallSideward=FVector::ZeroVector;
	wallInfo.wallUpward=FVector::ZeroVector;

	wallInfo.wallrunMoveDirection=FVector::ZeroVector;
	wallInfo.moveDirectionAlongWallAxis=FVector::ZeroVector;
	wallInfo.lookingMoveDirectionAlongWallAxis=FVector::ZeroVector;
}

void ACharacterController::SetHorizontalVelocity(FVector velocity) {
	Movement->Velocity=FVector(velocity.X, velocity.Y, GetVelocity().Z);
}

void ACharacterController::SetVelocity(FVector velocity) {
	Movement->Velocity=velocity;
}

FVector ACharacterController::MoveTowardsVector(FVector current, FVector target, float accel) {
	float deltaTime=GetWorld()->DeltaTimeSeconds;

	return FMath::VInterpTo(current, target, deltaTime, accel);
}

float ACharacterController::GetStaminaRatio() {
	return characterStatus.stamina/maxStamina;
}

FString ACharacterController::GetWallSide() {
	return FString(UEnum::GetDisplayValueAsText(wallInfo.wallrunSide).ToString());
}

bool ACharacterController::RaycastInMoveDirection() {
	FVector vecToWall;
	vecToWall=(characterStatus.moveDirection)*checkWallRayLength;
	vecToWall = GetActorLocation()+vecToWall;
	
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this);

	FHitResult Hit;
	return RaycastFromCapsule(Hit, vecToWall);
}

void ACharacterController::ConsumeStamina(bool useDeltaTime) {
	float staminaChangeAmount=staminaLoseAmount;
	if(useDeltaTime) {
		staminaChangeAmount *= GetWorld()->DeltaTimeSeconds;

		if(wallInfo.wallrunMoveDirection.Z > 0.5f) {
			staminaChangeAmount*=2.f;
		}
	}

	
	characterStatus.stamina = FMath::Max(characterStatus.stamina-staminaChangeAmount , 0.f);
}

void ACharacterController::RecoverStamina() {
	float staminaChangeAmount=GetWorld()->DeltaTimeSeconds*staminaRecoverAmount;
	
	characterStatus.stamina=FMath::Min(characterStatus.stamina+staminaChangeAmount , maxStamina);
}

#pragma endregion

