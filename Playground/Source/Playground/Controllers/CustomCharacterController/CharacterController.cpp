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

	bIsGrounded=true;
}

void ACharacterController::BeginPlay()
{
	Super::BeginPlay();

	CharacterPlayerController=Cast<ACharacterPlayerController>(GetController());
	
	// WallrunComponent=FindComponentByClass<UWallrunComponent>();
	// WallrunComponent->SetCharacter(this);
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

	PlayerInputComponent->BindAction("Pause", IE_Pressed, this, &ACharacterController::TogglePause);
}

void ACharacterController::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	
}

void ACharacterController::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
	
}

void ACharacterController::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
	
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

void ACharacterController::TogglePause() {
	CharacterPlayerController->TogglePauseState();
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

#pragma endregion

#pragma region JumpFunctions

void ACharacterController::ApplyGroundJump() {
	// UCustomUtils::Print("Ground Jump");

	bJumpRequested=false;

	// FVector launchDirection=FVector::UpVector;
	FVector launchDirection=(moveDirection + FVector::UpVector).GetSafeNormal();
	
	FVector launchVelocity=launchDirection * Movement->JumpZVelocity;
	// UCustomUtils::DrawVectorFromActor(this, launchVelocity, FColor::Green, 3);
	

	LaunchCharacter(launchVelocity, false, false); 
}

void ACharacterController::ApplyAirJump() {
	// UCustomUtils::Print("Air Jump");

	bJumpRequested=false;

	FVector launchDirection=(moveDirection+FVector::UpVector).GetSafeNormal();

	FVector launchVelocity=launchDirection * Movement->JumpZVelocity;
	
	LaunchCharacter(launchVelocity, false, true); 
}



void ACharacterController::GroundLeft() {
	bIsGrounded=false;
}

void ACharacterController::GroundLand() {
	bIsGrounded=true;
	ResetJumpCount(jumpsMax);

	bJumpRequested=false;
}


bool ACharacterController::ConsumeJump() {
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
	// float currentToMaxRatio=GetVelocity().Size() / Movement->MaxFlySpeed;
	// if(currentToMaxRatio>1) {
	// 	FVector velocity=GetVelocity()/currentToMaxRatio;
	// 	SetVelocity(velocity);
	// }
	
	SetVelocity(GetVelocity().GetClampedToMaxSize(Movement->MaxFlySpeed));
	
}

void ACharacterController::ClampHorizontalVelocity() {
	// float currentToMaxRatio=GetHorizontalVelocity().Size() / Movement->MaxFlySpeed;
	// if(currentToMaxRatio>1) {
	// 	FVector velocity=GetHorizontalVelocity()/currentToMaxRatio;
	// 	SetHorizontalVelocity(velocity);
	// }

	SetHorizontalVelocity(GetHorizontalVelocity().GetClampedToMaxSize(Movement->MaxFlySpeed * 0.5f));
	
}

void ACharacterController::SetHorizontalVelocity(FVector velocity) {
	Movement->Velocity=FVector(velocity.X, velocity.Y, GetVelocity().Z);
}

void ACharacterController::SetVelocity(FVector velocity) {
	Movement->Velocity=velocity;
}



void ACharacterController::CancelVerticalVelocity() {
	SetVelocity(GetHorizontalVelocity());
}

float ACharacterController::GetStaminaRatio() {
	return stamina/maxStamina;
}

void ACharacterController::ConsumeStamina(bool useDeltaTime) {
	float staminaChangeAmount=staminaLoseAmount*10.f;
	if(useDeltaTime) {
		staminaChangeAmount *= GetWorld()->DeltaTimeSeconds;
	}
	
	stamina = FMath::Max(stamina-staminaChangeAmount , 0.f);
}

void ACharacterController::RecoverStamina() {
	float staminaChangeAmount=GetWorld()->DeltaTimeSeconds*staminaRecoverAmount*10.f;
	
	stamina=FMath::Min(stamina+staminaChangeAmount , maxStamina);
}

#pragma endregion

#pragma region UtilityFunctions
FVector ACharacterController::MoveTowardsVector(FVector current, FVector target, float accel) {
	float deltaTime=GetWorld()->DeltaTimeSeconds;

	return FMath::VInterpTo(current, target, deltaTime, accel);
}
#pragma endregion

