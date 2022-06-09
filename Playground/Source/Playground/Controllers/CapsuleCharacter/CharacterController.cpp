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
#include "Playground/CustomComponents/WallrunComponent.h"

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

	WallrunComponent=CreateDefaultSubobject<UWallrunComponent>("Wallrun Component");
	WallrunComponent->SetCharacter(this);

	bIsGrounded=true;
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

	stamina=maxStamina;
}

void ACharacterController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(!bIsWallrunning) {
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
	
}

void ACharacterController::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
	
}

void ACharacterController::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
	if(bIsWallrunning || !WallrunComponent->wallrunTimerExpired) {
		return;
	}

	if(!WallrunComponent->IsValidForWallrun(Hit.ImpactNormal)) {
		return;
	}
	
	// WallrunComponent->currentValidHit = Hit;
	WallrunComponent->UpdateWallInfo(Hit);
	
}

void ACharacterController::Landed(const FHitResult& Hit) {
	
}

#pragma endregion

#pragma region InputHandlingFunctions

void ACharacterController::ReadMoveForwardInput(float value) {
	inputValues.moveInput.X=value;

	UpdateMoveDirection();
	WallrunComponent->UpdateWallrunModeOnInputKeys();
}

void ACharacterController::ReadMoveSidewardInput(float value) {
	inputValues.moveInput.Y=value;

	UpdateMoveDirection();
	WallrunComponent->UpdateWallrunModeOnInputKeys();
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
	bJumpRequested=true;
}

void ACharacterController::ReadJumpInputEnd() {
	inputValues.bJumpInput=false;
	bJumpRequested=false;
}

void ACharacterController::ReadSprintInputStart() {
	inputValues.bSprintInput=true;
}

void ACharacterController::ReadSprintInputEnd() {
	inputValues.bSprintInput=false;
}

#pragma endregion

#pragma region MovementFunctions

void ACharacterController::ApplyGroundMovement() {
	if(inputValues.moveInput.Size() != 0.f) {
		AddMovementInput(moveDirection, inputValues.moveInput.Size());
	}
}

void ACharacterController::ApplyAirMovement() {
	if(inputValues.moveInput.Size() != 0.f) {
		AddMovementInput(moveDirection, inputValues.moveInput.Size());
	}
}

void ACharacterController::ApplyWallrunMovement() {
	if(inputValues.moveInput.Size() != 0.f ) {
		// FVector wallrunVelocity;
		// wallrunVelocity=WallrunComponent->wallrunMoveDirection*Movement->MaxCustomMovementSpeed;
		// wallrunVelocity=WallrunComponent->GetVelocity();
		
		// SetVelocity(wallrunVelocity);

		SetVelocity(WallrunComponent->GetVelocity());
	}
}

#pragma endregion

#pragma region JumpFunctions

void ACharacterController::ApplyGroundJump() {
	UCustomUtils::Print("Ground Jump");

	bJumpRequested=false;

	FVector launchDirection=FVector::UpVector;

	FVector launchVelocity=launchDirection * Movement->JumpZVelocity;

	WallrunComponent->StartWallrunDelayTimer(WallrunComponent->wallrunDelay);

	LaunchCharacter(launchVelocity, false, true); 
}

void ACharacterController::ApplyAirJump() {
	UCustomUtils::Print("Air Jump");

	bJumpRequested=false;

	FVector launchDirection=(moveDirection+FVector::UpVector).GetSafeNormal();

	FVector launchVelocity=launchDirection * Movement->JumpZVelocity;

	WallrunComponent->StartWallrunDelayTimer(WallrunComponent->wallrunDelay);

	LaunchCharacter(launchVelocity, false, true); 
}

void ACharacterController::ApplyWallrunJump() {
	UCustomUtils::Print("Wallrun Jump");
	
	bJumpRequested=false;

	FVector wallNormal=WallrunComponent->wallNormal;
	if(wallNormal.IsNearlyZero()) {
		wallNormal=WallrunComponent->lastValidNormal;
	}
	
	FVector launchDirection=(wallNormal+FVector::UpVector).GetSafeNormal();

	FVector launchVelocity=launchDirection * Movement->MaxFlySpeed * 2.f;

	LaunchCharacter(launchVelocity, false, true);

	ConsumeStamina(false);
}

void ACharacterController::ApplyWallrunEndingJump() {
	UCustomUtils::Print("WallrunENDING Jump");

	bJumpRequested=false;

	FVector launchDirection=FVector::UpVector;

	FVector launchVelocity=launchDirection * Movement->JumpZVelocity * 0.75f;

	WallrunComponent->StartWallrunDelayTimer(WallrunComponent->wallrunDelay);

	LaunchCharacter(launchVelocity, false, true); 
}

void ACharacterController::GroundLeft() {
	bIsGrounded=false;
}

void ACharacterController::GroundLand() {
	bIsGrounded=true;
	ResetJumpCount(jumpsMax);
}

void ACharacterController::WallrunLand() {
	bIsGrounded=true;
	ResetJumpCount(FMath::Max(1,jumpsMax-1));
}

bool ACharacterController::ConsumeJump() {
	if(bIsWallrunning) { //always jump if wallrunning, even with 0 jumps left
		return true;
	}
	
	if(jumpsLeft > 0) {
		jumpsLeft--;
		return true;
	}
	
	return false;
}

void ACharacterController::ResetJumpCount(int jumps) {
	jumpsLeft=FMath::Clamp(jumps, 0, jumpsMax);
}

#pragma endregion



#pragma region StatusFunctions

void ACharacterController::UpdateCharacterAxis() {
	characterRotation=Controller->GetControlRotation();
	const FRotator YawRotation(0, characterRotation.Yaw, 0);

	characterSideward = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	characterForward = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

	lookingDirection = Camera->GetComponentRotation().Vector();
}

void ACharacterController::UpdateMoveDirection() {
	if(inputValues.moveInput.Size() != 0.f) {

		FVector SidewardMovement=inputValues.moveInput.Y * characterSideward;
		FVector ForwardMovement=inputValues.moveInput.X * characterForward;
		moveDirection=(ForwardMovement + SidewardMovement).GetSafeNormal();
	}else {
		moveDirection=FVector::ZeroVector;
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

void ACharacterController::CancelVerticalVelocity() {
	SetVelocity(GetHorizontalVelocity());
}

float ACharacterController::GetStaminaRatio() {
	return stamina/maxStamina;
}

void ACharacterController::ConsumeStamina(bool useDeltaTime) {
	float staminaChangeAmount=staminaLoseAmount;
	if(useDeltaTime) {
		staminaChangeAmount *= GetWorld()->DeltaTimeSeconds;

		if(WallrunComponent->wallrunMoveDirection.Z > 0.5f) {
			staminaChangeAmount*=2.f;
		}
	}

	
	stamina = FMath::Max(stamina-staminaChangeAmount , 0.f);
}

void ACharacterController::RecoverStamina() {
	float staminaChangeAmount=GetWorld()->DeltaTimeSeconds*staminaRecoverAmount;
	
	stamina=FMath::Min(stamina+staminaChangeAmount , maxStamina);
}

#pragma endregion
