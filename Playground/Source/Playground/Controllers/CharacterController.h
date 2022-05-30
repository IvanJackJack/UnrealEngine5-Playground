// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterController.generated.h"

UENUM(BlueprintType)
enum class EWallrunSide : uint8 {
	Left UMETA(DisplayName = "Left"),
	Right UMETA(DisplayName = "Right")
};

UENUM(BlueprintType)
enum class EWallrunEndreason : uint8 {
	Fall UMETA(DisplayName = "Fall"),
	Jump UMETA(DisplayName = "Jump"),
	WrongDirection UMETA(DisplayName = "WrongDirection"),
	SideChange UMETA(DisplayName = "SideChange"),
	NoWallhit UMETA(DisplayName = "NoWallhit")
};

USTRUCT(BlueprintType)
struct FInput {
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
	FVector moveInput;

	UPROPERTY(VisibleAnywhere)
	bool bJumpInput;

	UPROPERTY(VisibleAnywhere)
	bool bWallrunInput;
};

USTRUCT(BlueprintType)
struct FStatus {
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool bIsGrounded;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool bIsWallrunning;
	bool bWasWallrunning;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool bIsOverlappingPlatform;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float overlapBodyCount;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector wallNormal;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector wallUpward;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector wallSideward;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FHitResult lastValidHit;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector playerToWallDirection;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector characterForward;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector characterSideward;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	FVector moveDirectionAlongWallAxis;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector moveDirection;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector wallrunMoveDirection;

	FRotator characterRotation;

	float stamina;

	bool wallrunTimerExpired;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	int jumpsLeft;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	EWallrunSide wallrunSide; //da che parte, rispetto al muro, sono
	EWallrunSide startingWallrunSide;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	FVector lookingDirection;

	EWallrunEndreason lastEndReason;
};

UCLASS()
class PLAYGROUND_API ACharacterController : public ACharacter
{
	GENERATED_BODY()

#pragma region UnrealFunctions
public:
	ACharacterController();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	UFUNCTION()
	virtual void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	virtual void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	virtual void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION()
	virtual void Landed(const FHitResult& Hit) override;

#pragma endregion

#pragma region Components
public: //Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component)
	class USpringArmComponent* CameraBoom;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component)
	class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component)
	class UCapsuleComponent* Capsule;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component)
	class UCharacterMovementComponent* Movement;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component)
	class UStateMachineComponent* StateMachine;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Component)
	class ACharacterPlayerController* CharacterPlayerController;
	
#pragma endregion

#pragma region Structs
public: //Struct
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Structs)
	FInput inputValues;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Structs)
	FStatus characterStatus;
#pragma endregion

#pragma region Parameters
public: //Variables
	float cameraRotationSpeed = 50.f;
	float maxStamina;
	int jumpsMax = 2;
	float initialAirControl=0.25f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float wallrunDelay=0.75f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float checkWallRayLEngth;
	FTimerHandle wallrunDelayTimer;

#pragma endregion

#pragma region GettersSetters
public: //Getters and Setters
	FORCEINLINE
	class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	FORCEINLINE
	class UCameraComponent* GetCamera() const { return Camera; }

	FORCEINLINE
	FVector GetHorizontalVelocity() const { return FVector(GetVelocity().X, GetVelocity().Y, 0.f); }

	void SetHorizontalVelocity(FVector velocity);

	void SetVelocity(FVector velocity);

	FORCEINLINE
	void SetLastEndreason(EWallrunEndreason endReason) { characterStatus.lastEndReason = endReason; }

	void ResetWallrunTimer();

#pragma endregion

#pragma region InputHandlingFunctions
public: //Input Functions
	void ReadMoveForwardInput(float value);

	void ReadMoveSidewardInput(float value);

	void TurnCamera(float Rate);

	void LookUpCamera(float Rate);

	void ReadJumpInputStart();

	void ReadJumpInputEnd();

	void ReadSprintInputStart();

	void ReadSprintInputEnd();

#pragma endregion

#pragma region StatusFunctions
	void UpdateCharacterAxis();

	void ClampVelocity();

	void ClampHorizontalVelocity();

	void PlatformOverlap();

	void PlatformOverlapLeft();

	void UpdateWallInfo();

	void ResetHitAndWallInfo();

	void UpdateMoveDirection();


#pragma endregion

#pragma region WallrunFunctions

	bool CanWallrun();

	bool ShouldEndWallrun();

	bool CanSurfaceBeWallran(FVector surfaceNormal);

	bool MovingTowardsWallForRun();

	void UpdateWallrunAndInfoIfRayHit();

	void BeginWallrun();

	void EndWallrun();

	void UpdateWallrunSide();

	void UpdateWallrunDirection();
	
#pragma endregion

#pragma region MovementFunctions

public: //Movement Functions
	void ApplyGroundMovement();

	void ApplyAirMovement();

	void ApplyWallrunMovement();

#pragma endregion

#pragma region JumpFunctions
	void ApplyGroundJump();

	void ApplyAirJump();

	void ApplyWallrunJump();

	bool ConsumeJump();

	void ResetJumpCount(int jumps);

	void GroundLeft();

	void GroundLand();

	void WallrunLand();

#pragma endregion

};











	// void UpdateLastVelocity();
	//
	// void GroundCheck();
	//
	// void ACharacterController::UpdateLastVelocity() {
	// 	if (characterStatus.moveVelocity != GetVelocity()) {
	// 		characterStatus.moveVelocity=GetVelocity();
	// 		// UCustomUtils::Print(characterStatus.moveVelocity);
	// 	}
	// }
	//
	// void ACharacterController::GroundCheck() {
	// 	bool bGrounded=!Movement->IsFalling();
	// 	if(bGrounded != characterStatus.bIsGrounded) {
	// 		if(!bGrounded) {
	// 			GroundLeft();
	// 		}else {
	// 			GroundLand();
	// 		}
	//
	// 		characterStatus.bIsGrounded=bGrounded;
	// 	}
	// }