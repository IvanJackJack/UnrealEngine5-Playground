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
	wallInfo.wallrunTimerExpired=true;
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
	checkWallRayLength=Capsule->GetScaledCapsuleRadius() * 2.f;
}

void ACharacterController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(!characterStatus.bIsWallrunning) {
		FVector vecToWall;
		vecToWall=(-wallInfo.wallNormal)*checkWallRayLength;
		vecToWall = GetActorLocation()+vecToWall;
		
		FCollisionQueryParams collisionParams;
		collisionParams.AddIgnoredActor(this);

		FHitResult Hit;
		if(!RaycastFromCapsule(Hit, vecToWall)) {
			ResetHitAndWallInfo();
		}
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
	if(characterStatus.bIsWallrunning && characterStatus.lastValidHit.bBlockingHit) {
		return;
	}

	if(!CanSurfaceBeWallran(Hit.ImpactNormal)) {
		return;
	}

	characterStatus.lastValidHit = Hit;
	UpdateWallInfo();
}

void ACharacterController::Landed(const FHitResult& Hit) {
	
}

#pragma endregion

#pragma region InputHandlingFunctions

void ACharacterController::ReadMoveForwardInput(float value) {
	inputValues.moveInput.X=value;

	UpdateMoveDirection();
}

void ACharacterController::ReadMoveSidewardInput(float value) {
	inputValues.moveInput.Y=value;

	UpdateMoveDirection();
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
		
		switch (wallInfo.wallrunMode) {
			case EWallrunMode::Horizontal:
				wallrunVelocity=wallInfo.wallrunMoveDirection*Movement->MaxFlySpeed;
				SetVelocity(wallrunVelocity);
				break;
			case EWallrunMode::Vertical:
				wallrunVelocity=wallInfo.wallUpward*Movement->MaxFlySpeed;
				SetVelocity(wallrunVelocity);
				break;
			case EWallrunMode::Omnidiretional:
				wallrunVelocity=wallInfo.moveDirectionAlongWallAxis*Movement->MaxFlySpeed;
				SetVelocity(wallrunVelocity);
				break;
			case EWallrunMode::Visual:
				wallrunVelocity=wallInfo.lookingMoveDirectionAlongWallAxis*Movement->MaxFlySpeed;
				SetVelocity(wallrunVelocity);
				break;
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

	// ResetHitAndWallInfo();
	inputValues.bJumpInput=false;
	
	FVector wallVerticalAxis;
	switch (wallInfo.wallrunSide) {
		case EWallrunSide::Left:
			wallVerticalAxis=FVector(0.f, 0.f, 1.f);
			break;
		case EWallrunSide::Right:
			wallVerticalAxis=FVector(0.f, 0.f, -1.f);
			break;
	}
	
	FVector awayFromWallDirection=FVector::CrossProduct(wallInfo.wallrunMoveDirection, wallVerticalAxis).GetSafeNormal();

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
	if(!wallInfo.wallrunTimerExpired) {
		return false;
	}

	if(!characterStatus.lastValidHit.bBlockingHit) {
		return false;
	}

	UpdateWallrunSide();
	if(!MoveDirectionTowardsWall()) {
		return false;
	}
	
	return true;
}

bool ACharacterController::ShouldEndWallrun() {
	if(!MoveDirectionTowardsWall()) {
		SetLastEndreason(EWallrunEndreason::WrongKeys);
		return true;
	}

	if(!characterStatus.lastValidHit.bBlockingHit) {
		SetLastEndreason(EWallrunEndreason::NoHit);
		return true;
	}

	if(wallInfo.startingWallrunSide != wallInfo.wallrunSide) {
		SetLastEndreason(EWallrunEndreason::SideChange);
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
			if(wallInfo.bUseVisualWallrun) {
				wallInfo.wallrunMode=EWallrunMode::Visual;
			}else {
				wallInfo.wallrunMode=EWallrunMode::Omnidiretional;
			}
			
		}else{
			// premo A o D
			wallInfo.wallrunMode=EWallrunMode::Horizontal;
		}
		
	}else {
		// premo W
		wallInfo.wallrunMode=EWallrunMode::Vertical;
	}
	
}

void ACharacterController::UpdateWallrunSide() {
	//2D per il casi di muri inclinati
	FVector2D wallNormal2D=FVector2D(wallInfo.wallNormal);
	FVector2D characterAxis2D=FVector2D(characterStatus.characterSideward);

	float dotSide=FVector2D::DotProduct(wallNormal2D, characterAxis2D);

	float sideChangeTolerance=0.125f;
	
	switch (wallInfo.wallrunSide) {
		case EWallrunSide::Right:
			if(dotSide < -sideChangeTolerance) {
				wallInfo.wallrunSide=EWallrunSide::Left;
			}
			break;
		
		case EWallrunSide::Left:
			if(dotSide > sideChangeTolerance) {
				wallInfo.wallrunSide=EWallrunSide::Right;
			}
			break;
	}
	
}

void ACharacterController::UpdateWallrunDirection() {
	FVector sideVerticalDirection;

	if(wallInfo.wallrunSide==EWallrunSide::Right) {
		sideVerticalDirection=FVector::UpVector;
	}else {
		sideVerticalDirection=FVector::DownVector;
	}

	// characterStatus.moveDirection=FVector::CrossProduct(characterStatus.wallNormal, sideVerticalDirection).GetSafeNormal();
	wallInfo.wallrunMoveDirection=FVector::CrossProduct(wallInfo.wallNormal, sideVerticalDirection).GetSafeNormal();

	

	// Movement->SetPlaneConstraintNormal(characterStatus.wallNormal);
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
	
		if(dotVal>0) {
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
	FVector vecToWall;
	vecToWall=(-wallInfo.wallNormal)*checkWallRayLength;
	vecToWall = GetActorLocation()+vecToWall;

	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this);

	FHitResult Hit;
	// if( GetWorld()->LineTraceSingleByChannel(
	// 	Hit, 
	// 	GetActorLocation(), 
	// 	vecToWall,
	// 	ECC_Visibility,
	// 	collisionParams,
	// 	FCollisionResponseParams::DefaultResponseParam ) 
	// 	)
	if(RaycastFromCapsule(Hit, vecToWall))
	{
		characterStatus.lastValidHit=Hit;
		UpdateWallInfo();

		UpdateWallrunModeOnInputKeys();
		UpdateWallrunSide();
		UpdateWallrunDirection();

	}
	else {
		ResetHitAndWallInfo();
	}
}

void ACharacterController::BeginWallrun() {
	characterStatus.bIsWallrunning=true;

	UpdateWallrunModeOnInputKeys();
	UpdateWallrunSide();
	UpdateWallrunDirection();

	Movement->AirControl=1;
	Movement->GravityScale=0;

	//remove vertical velocity component at start
	SetVelocity(GetHorizontalVelocity());

	// Movement->SetPlaneConstraintNormal(FVector::UpVector);
	// Movement->SetPlaneConstraintNormal(FVector::ZeroVector);
	
	wallInfo.startingWallrunSide=wallInfo.wallrunSide;
}

void ACharacterController::EndWallrun() {
	EWallrunEndreason endreason = wallInfo.lastEndReason;
	
	characterStatus.bIsWallrunning=false;
	Movement->AirControl=initialAirControl;
	Movement->GravityScale=1;

	// Movement->SetPlaneConstraintNormal(FVector::ZeroVector);

	if(characterStatus.lastValidHit.bBlockingHit) {
		ResetHitAndWallInfo();
	}
	
	switch (endreason) {
		case EWallrunEndreason::Jump:
			StartWallrunDelayTimer(wallrunDelay);
			break;
	
		case EWallrunEndreason::SideChange:
			StartWallrunDelayTimer(wallrunDelay * 0.5f);
			break;
	
		case EWallrunEndreason::WrongKeys:
			StartWallrunDelayTimer(wallrunDelay * 0.5f);
			break;
	
		default:
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

#pragma endregion

#pragma region StatusFunctions

void ACharacterController::UpdateCharacterAxis() {
	characterStatus.characterRotation=Controller->GetControlRotation();
	const FRotator YawRotation(0, characterStatus.characterRotation.Yaw, 0);

	characterStatus.characterSideward = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	characterStatus.characterForward = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

	characterStatus.lookingDirection = Camera->GetComponentRotation().Vector();
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

bool ACharacterController::HasValidHit() {
	return characterStatus.lastValidHit.bBlockingHit;
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
	FHitResult Hit=characterStatus.lastValidHit;

	wallInfo.wallNormal=Hit.ImpactNormal;
	wallInfo.wallSideward=FVector::CrossProduct(wallInfo.wallNormal, FVector::UpVector).GetSafeNormal();
	wallInfo.wallUpward=FVector::CrossProduct(wallInfo.wallSideward, wallInfo.wallNormal).GetSafeNormal();
}

void ACharacterController::ResetHitAndWallInfo() {
	characterStatus.lastValidHit = FHitResult();

	wallInfo.wallNormal=FVector::ZeroVector;
	wallInfo.wallSideward=FVector::ZeroVector;
	wallInfo.wallUpward=FVector::ZeroVector;

	wallInfo.wallrunMoveDirection=FVector::ZeroVector;
	wallInfo.moveDirectionAlongWallAxis=FVector::ZeroVector;
	wallInfo.lookingMoveDirectionAlongWallAxis=FVector::ZeroVector;
}

void ACharacterController::UpdateMoveDirection() {
	if(inputValues.moveInput.Size() != 0.f) {

		FVector SidewardMovement=inputValues.moveInput.Y * characterStatus.characterSideward;
		FVector ForwardMovement=inputValues.moveInput.X * characterStatus.characterForward;
		characterStatus.moveDirection=(ForwardMovement + SidewardMovement).GetSafeNormal();

		if(!wallInfo.wallNormal.IsNearlyZero()) {
			const FVector SidewardMovementAlongWallAxis=-inputValues.moveInput.Y * wallInfo.wallSideward;
			const FVector UpwardMovementAlongWallAxis=inputValues.moveInput.X * wallInfo.wallUpward;
			wallInfo.moveDirectionAlongWallAxis=(UpwardMovementAlongWallAxis + SidewardMovementAlongWallAxis).GetSafeNormal();

			wallInfo.lookingMoveDirectionAlongWallAxis=FVector::VectorPlaneProject(characterStatus.lookingDirection, wallInfo.wallNormal).GetSafeNormal();
			// wallInfo.lookingMoveDirectionAlongWallAxis.Z = FMath::Max(0.f, wallInfo.lookingMoveDirectionAlongWallAxis.Z);
		}else {
			wallInfo.moveDirectionAlongWallAxis=FVector::ZeroVector;
			wallInfo.lookingMoveDirectionAlongWallAxis=FVector::ZeroVector;
		}
		
		
	}else {
		characterStatus.moveDirection=FVector::ZeroVector;
		wallInfo.moveDirectionAlongWallAxis=FVector::ZeroVector;
		wallInfo.lookingMoveDirectionAlongWallAxis=FVector::ZeroVector;
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

