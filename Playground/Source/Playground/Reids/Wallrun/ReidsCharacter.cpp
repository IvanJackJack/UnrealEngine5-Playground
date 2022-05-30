#include "ReidsCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Playground/Utilities/CustomUtils.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"

#include "Engine/World.h"

AReidsCharacter::AReidsCharacter()
{
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

}

#pragma region UnrealFunctions

void AReidsCharacter::BeginPlay()
{
	Super::BeginPlay();

	check(Capsule)
	Capsule->OnComponentHit.AddDynamic(this, &AReidsCharacter::OnHit);

	Movement->SetPlaneConstraintEnabled(true);
	ResetJump(jumpsMax);
}

void AReidsCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(bIsWallrunning) {
		UpdateWallrun();
	}

	UpdateMovement();
	ApplyMovement();
	
	ClampHorizontalVelocity();
}

void AReidsCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AReidsCharacter::ReadJumpInputStart);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AReidsCharacter::ReadJumpInputEnd);

	PlayerInputComponent->BindAction("Wallrun", IE_Pressed, this, &AReidsCharacter::ReadWallrunInputStart);
	PlayerInputComponent->BindAction("Wallrun", IE_Released, this, &AReidsCharacter::ReadWallrunInputEnd);
	
	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &AReidsCharacter::ReadMoveForwardInput);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &AReidsCharacter::ReadMoveSidewardInput);

	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &AReidsCharacter::TurnCamera);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &AReidsCharacter::LookUpCamera);
	
}

void AReidsCharacter::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
	if(bIsWallrunning) {
		return;
	}

	if(Movement->IsFalling()) {
		// UCustomUtils::Print("character is falling");
		if(CanSurfaceBeWallran(Hit.ImpactNormal)) {
			// UCustomUtils::Print("surface is wallrunnable");

			FindRunDirectionAndSide(Hit.ImpactNormal);
			if(AreRequiredKeysDown()) {
			// UCustomUtils::Print("keys are down");
				// UpdateWallrunMoveDirectionAndSide(Hit.ImpactNormal);
				BeginWallrun();
			}
		}
		
	}
		
}

void AReidsCharacter::Landed(const FHitResult& Hit) {
	GroundLand();
}

#pragma endregion

#pragma region InputHandlingFunctions

void AReidsCharacter::ReadMoveForwardInput(float value) {
	inputValues.moveInput.X=value;
	forwardAxis=value;
}

void AReidsCharacter::ReadMoveSidewardInput(float value) {
	inputValues.moveInput.Y=value;
	rightAxis=value;
}

void AReidsCharacter::TurnCamera(float Rate) {
	AddControllerYawInput(Rate * 100 * GetWorld()->GetDeltaSeconds());
}

void AReidsCharacter::LookUpCamera(float Rate) {
	AddControllerPitchInput(Rate * 100 * GetWorld()->GetDeltaSeconds());
}

void AReidsCharacter::ReadJumpInputStart() {
	inputValues.bJumpInput=true;
	if(ConsumeJump()) {
		LaunchCharacter(FindLaunchVelocity(), false, true); //impostare launch velocity in wallrunning exit e poi in raising la resetto
		if(bIsWallrunning) {
			EndWallrun(EWallrunEndreason::Jump);
		}
	}
}

void AReidsCharacter::ReadJumpInputEnd() {
	inputValues.bJumpInput=false;
	StopJumping();
}

void AReidsCharacter::ReadWallrunInputStart() {
	inputValues.bWallrunInput=true;
}

void AReidsCharacter::ReadWallrunInputEnd() {
	inputValues.bWallrunInput=false;
}

#pragma endregion

#pragma region MovementFunctions

void AReidsCharacter::UpdateMovement() {
	const FRotator YawRotation(0, Controller->GetControlRotation().Yaw, 0);
	characterRight = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	characterForward = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

	FVector rightMovement= characterRight * rightAxis; 
	FVector forwardMovement=characterForward * forwardAxis;

	currentCharacterMovement=rightMovement+forwardMovement;
	characterDirection=currentCharacterMovement.GetSafeNormal();
}

void AReidsCharacter::ApplyMovement() {
	if(currentCharacterMovement.Size() != 0.f) {
		AddMovementInput(characterDirection, inputValues.moveInput.Size());
	}
}

#pragma endregion

#pragma region ReidsFunctions

void AReidsCharacter::GroundLeft() {

}

void AReidsCharacter::GroundLand() {
	ResetJump(jumpsMax);
}

bool AReidsCharacter::MovingForward() {
	return false;
}

bool AReidsCharacter::OnForward() {
	return false;
}

bool AReidsCharacter::ConsumeJump() {
	if(bIsWallrunning) { //always jump if wallrunning, even with 0 jumps left
		return true;
	}
	else {
		if(jumpsLeft > 0) {
			jumpsLeft--;
			return true;
		}
	}

	return false;
}

void AReidsCharacter::ResetJump(int jumps) {
	jumpsLeft=FMath::Clamp(jumps, 0, jumpsMax);
}

void AReidsCharacter::BeginWallrun() {
	// UCustomUtils::Print("Wallrun start", 0.25f);

	bIsWallrunning=true;
	Movement->AirControl=1;
	Movement->GravityScale=0;
	Movement->SetPlaneConstraintNormal(FVector::UpVector);
	BeginCameraTilt();
}

void AReidsCharacter::EndWallrun(EWallrunEndreason endreason) {
	// UCustomUtils::Print("Wallrun end");

	switch (endreason) {
	case EWallrunEndreason::Jump:
		ResetJump(jumpsMax - 1);
		break;
	case EWallrunEndreason::Fall:
		ResetJump(1);
		break;
	}

	bIsWallrunning=false;
	Movement->AirControl=0.5f;
	Movement->GravityScale=1;
	Movement->SetPlaneConstraintNormal(FVector::ZeroVector);
	EndCameraTilt();
}

void AReidsCharacter::BeginCameraTilt_Implementation() {

}

void AReidsCharacter::EndCameraTilt_Implementation() {

}

void AReidsCharacter::FindRunDirectionAndSide(FVector wallNormal) {
	FVector2D wallNormal2D=FVector2D(wallNormal);
	FVector2D characterRight2D=FVector2D(characterRight);

	float dotSide=FVector2D::DotProduct(wallNormal2D, characterRight2D);
	FVector localDirection;

	if(dotSide>=0.f) {
		wallrunSide=EWallrunSide::Right;
		localDirection=FVector::UpVector;
	}else {
		wallrunSide=EWallrunSide::Left;
		localDirection=FVector::DownVector;
	}

	wallrunDirection=FVector::CrossProduct(wallNormal, localDirection).GetSafeNormal();
}

bool AReidsCharacter::CanSurfaceBeWallran(FVector surfaceNormal) {
	float thresholdZ = -0.05;

	if(surfaceNormal.Z < thresholdZ) {
		return false;
	}

	FVector horizontalSurfaceNormal=FVector(surfaceNormal.X, surfaceNormal.Y, 0.f).GetSafeNormal();
	float surfaceSlope = FVector::DotProduct(surfaceNormal, horizontalSurfaceNormal);

	float surfaceAngle=FMath::Acos(surfaceSlope);

	return ( surfaceAngle < Movement->GetWalkableFloorAngle() );
		
}

FVector AReidsCharacter::FindLaunchVelocity() {
	FVector launchDirection=FVector::UpVector;
	
	if(bIsWallrunning) {
		FVector wallCrossDir;

		switch (wallrunSide) {
			case EWallrunSide::Left:
				wallCrossDir=FVector(0.f, 0.f, 1.f);
				break;
			case EWallrunSide::Right:
				wallCrossDir=FVector(0.f, 0.f, -1.f);
				break;
		}

		FVector awayFromWallDirection=FVector::CrossProduct(wallrunDirection, wallCrossDir);

		launchDirection=awayFromWallDirection;
	}
	else {
		if(Movement->IsFalling()) {
			launchDirection=currentCharacterMovement;
		}
	}

	launchDirection=(launchDirection+FVector::UpVector).GetSafeNormal();
	return launchDirection * Movement->JumpZVelocity;
}

bool AReidsCharacter::AreRequiredKeysDown() {
	bool forwardPressed=(forwardAxis>0.1f);

	if(!forwardPressed) {
		return false;
	}

	bool rightPressed;

	switch (wallrunSide) {
	case EWallrunSide::Right:
		rightPressed=(rightAxis<-0.1f);
		break;

	case EWallrunSide::Left:
		rightPressed=(rightAxis>0.1f);
		break;
	}

	return rightPressed;
}

FVector AReidsCharacter::GetHorizontalVelocity() {
	FVector velocity=GetVelocity();
	velocity.Z=0.f;
	return velocity;
}

void AReidsCharacter::SetHorizontalVelocity(FVector velocity) {
	Movement->Velocity=FVector(velocity.X, velocity.Y, GetVelocity().Z);
}

void AReidsCharacter::ClampHorizontalVelocity() {
	if(Movement->IsFalling()) {
		float currentToMaxRatio=GetHorizontalVelocity().Size() / Movement->MaxFlySpeed;
		if(currentToMaxRatio>1) {
			FVector velocity=GetHorizontalVelocity()/currentToMaxRatio;
			SetHorizontalVelocity(velocity);
		}
	}


	
}

void AReidsCharacter::UpdateWallrun() {
	if(!AreRequiredKeysDown()) {
		EndWallrun(EWallrunEndreason::Fall);
		return;
	}

	FVector vecToWall;
	if(wallrunSide==EWallrunSide::Right) {
		vecToWall=FVector::CrossProduct(wallrunDirection, FVector::UpVector);
	}else {
		vecToWall=FVector::CrossProduct(wallrunDirection, FVector::DownVector);
	}

	vecToWall=vecToWall.GetSafeNormal()*200.f;

	FHitResult Hit;
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this);

	if( GetWorld()->LineTraceSingleByChannel(
		Hit, 
		GetActorLocation(), 
		GetActorLocation()+vecToWall,
		ECC_Visibility,
		collisionParams,
		FCollisionResponseParams::DefaultResponseParam ) 
		) 
	{
		//update wallrun direction to follow the wall
		EWallrunSide lastSide=wallrunSide;
		FindRunDirectionAndSide(Hit.ImpactNormal);

		if(lastSide != wallrunSide) {
			// UCustomUtils::Print("Side changed during wallrun");
			EndWallrun(EWallrunEndreason::Fall);
			return;
		}

		SetHorizontalVelocity(wallrunDirection*GetVelocity().Size()); 
	}
	else {
		EndWallrun(EWallrunEndreason::Fall);
	}
}

#pragma endregion
