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

ACharacterController::ACharacterController()
{
 	PrimaryActorTick.bCanEverTick = true;

	Capsule=GetCapsuleComponent();
	Capsule->InitCapsuleSize(27.5f, 92.5f);

	//Movement=CreateDefaultSubobject<UCustomCharacterMovementComponent>(TEXT("MovementComponent"));
	//Movement->SetUpdatedComponent(Capsule);
	Movement=GetCharacterMovement();
	Movement->bOrientRotationToMovement = true;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 600.0f; 	
	CameraBoom->bUsePawnControlRotation = true; 

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	Camera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); 
	Camera->bUsePawnControlRotation = false; 

	// OverlapCapsule=CreateDefaultSubobject<UCapsuleComponent>("OverlapCapsule");
	// OverlapCapsule->SetupAttachment(RootComponent);
	// OverlapCapsule->InitCapsuleSize(28.f, 90.f);

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	cameraRotationSpeed=100.f;
	StateMachine=CreateDefaultSubobject<UStateMachineComponent>("State Machine");

	characterStatus.groundNormal=FVector::UpVector;
	characterStatus.bIsGrounded=true;
}

void ACharacterController::BeginPlay()
{
	Super::BeginPlay();

	CharacterPlayerController=Cast<ACharacterPlayerController>(GetController());

	StateMachine->Setup(FFSMContext{this, StateMachine});

	// UpdateLastVelocity();
	// UCustomUtils::Print(characterStatus.moveVelocity);
}

void ACharacterController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	characterStatus.characterRotation=Controller->GetControlRotation();


	UpdateLastVelocity();
}

void ACharacterController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacterController::ReadJumpInputStart);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacterController::ReadJumpInputEnd);

	PlayerInputComponent->BindAction("Wallrun", IE_Pressed, this, &ACharacterController::ReadWallrunInputStart);
	PlayerInputComponent->BindAction("Wallrun", IE_Released, this, &ACharacterController::ReadWallrunInputEnd);
	
	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &ACharacterController::ReadMoveForwardInput);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &ACharacterController::ReadMoveSidewardInput);

	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &ACharacterController::TurnCamera);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &ACharacterController::LookUpCamera);
	
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

void ACharacterController::ReadWallrunInputStart() {
	inputValues.bWallrunInput=true;
}

void ACharacterController::ReadWallrunInputEnd() {
	inputValues.bWallrunInput=false;
}

void ACharacterController::ApplyGroundMovement() {
	if(inputValues.bJumpInput) {
		Jump();
	}

	if(inputValues.moveInput.Size() != 0.f) {
		const FRotator YawRotation(0, characterStatus.characterRotation.Yaw, 0);
	
		const FVector SidewardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		const FVector SidewardMovement=inputValues.moveInput.X * SidewardDirection;

		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		const FVector ForwardMovement=inputValues.moveInput.Y * ForwardDirection;

		characterStatus.moveDirection=(ForwardMovement + SidewardMovement).GetSafeNormal();

		AddMovementInput(characterStatus.moveDirection, inputValues.moveInput.Size());
		
	}else {
		characterStatus.moveDirection=FVector::ZeroVector;
	}
}

void ACharacterController::ApplyAirMovement() {
	float airSidewardMovementMult=0.5f;

	if(inputValues.moveInput.Size() != 0.f) {
		const FRotator YawRotation(0, characterStatus.characterRotation.Yaw, 0);
	
		const FVector SidewardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		const FVector SidewardMovement=(inputValues.moveInput.X * airSidewardMovementMult) * SidewardDirection;

		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		const FVector ForwardMovement=inputValues.moveInput.Y * ForwardDirection;

		characterStatus.moveDirection=(ForwardMovement + SidewardMovement).GetSafeNormal();

		AddMovementInput(characterStatus.moveDirection, inputValues.moveInput.Size());
		
	}else {
		characterStatus.moveDirection=FVector::ZeroVector;
	}


}

void ACharacterController::UpdateLastVelocity() {
	if (characterStatus.moveVelocity != GetVelocity()) {
		characterStatus.moveVelocity=GetVelocity();
		// UCustomUtils::Print(characterStatus.moveVelocity);
	}
}

void ACharacterController::GroundCheck() {
	bool bGrounded=!Movement->IsFalling();
	if(bGrounded != characterStatus.bIsGrounded) {
		if(!bGrounded) {
			GroundLeft();
		}else {
			GroundLand();
		}

		characterStatus.bIsGrounded=bGrounded;
	}
}

void ACharacterController::GroundLeft() {
	UCustomUtils::Print(TEXT("Ground left static lib"));
}

void ACharacterController::GroundLand() {
	UCustomUtils::Print(TEXT("Ground land static lib"));
}



