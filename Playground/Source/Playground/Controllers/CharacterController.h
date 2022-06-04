// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterController.generated.h"

UENUM(BlueprintType)
enum class EWallrunSide : uint8 {
	Left UMETA(DisplayName = "Left"),
	Right UMETA(DisplayName = "Right"),
	Front UMETA(DisplayName = "Front")
};

UENUM(BlueprintType)
enum class EWallrunEndreason : uint8 {
	Fall UMETA(DisplayName = "Fall"),
	Jump UMETA(DisplayName = "Jump"),
	WrongKeys UMETA(DisplayName = "WrongKeys"),
	SideChange UMETA(DisplayName = "SideChange"),
	NoHit UMETA(DisplayName = "NoHit"),
	WrongDirection UMETA(DisplayName = "WrongDirection")
};

UENUM(BlueprintType)
enum class EWallrunMode : uint8 {
	Horizontal UMETA(DisplayName = "Horizontal"),
	Vertical UMETA(DisplayName = "Vertical"),
	Diagonal UMETA(DisplayName = "Diagonal"),
	Visual UMETA(DisplayName = "Visual"),

	None UMETA(DisplayName = "None")
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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool bIsOverlappingPlatform;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float overlapBodyCount;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FHitResult currentValidHit;
	FVector lastValidNormal;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector characterForward;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector characterSideward;

	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector moveDirection;

	FRotator characterRotation;

	float stamina;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int jumpsLeft;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector lookingDirection;
	
};

USTRUCT(BlueprintType)
struct FWallrun {
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector wallNormal;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector wallUpward;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector wallSideward;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector wallrunMoveDirection;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector moveDirectionAlongWallAxis;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector lookingMoveDirectionAlongWallAxis;

	bool wallrunTimerExpired;
	bool wrongKeysTimeElapsed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	EWallrunSide wallrunSide;
	EWallrunSide startingWallrunSide;
	EWallrunEndreason lastEndReason;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	EWallrunMode wallrunMode;
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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Structs)
	FWallrun wallInfo;
#pragma endregion

#pragma region Parameters
public: //Variables
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float cameraRotationSpeed = 50.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float maxStamina=100.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	int jumpsMax = 2;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float initialAirControl=0.25f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float wallrunDelay=0.75f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float wrongMoveKeysDelay=0.25f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float checkWallRayLength=75.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float minimalVisualVerticalValue=0.25f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float vectorMoveTowardsRatio=100.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float movementAcceleration=100.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float movementDeceleration=100.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	EWallrunMode desiredHorizontalMode = EWallrunMode::Horizontal;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	EWallrunMode desiredVerticalMode = EWallrunMode::Vertical;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	EWallrunMode desiredDiagonalMode = EWallrunMode::None;

#pragma endregion

#pragma region Timers

	FTimerHandle wallrunDelayTimer;
	FTimerHandle keysDelayTimer;

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
	void SetLastEndreason(EWallrunEndreason endReason) { wallInfo.lastEndReason = endReason; }
	
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

	void UpdateMoveDirection();

	void ClampVelocity();

	void ClampHorizontalVelocity();

	void PlatformOverlap();

	void PlatformOverlapLeft();

	bool HasValidHit();

	bool RaycastFromCapsule(FHitResult& Hit, FVector End);

	FVector MoveTowardsVector(FVector vector, FVector target, float accel);

#pragma endregion

#pragma region WallrunFunctions

	void ResetHitAndWallInfo();

	void UpdateWallInfo();

	bool CanWallrun();

	bool ShouldEndWallrun();

	bool CanSurfaceBeWallran(FVector surfaceNormal);

	bool MoveDirectionTowardsWall();

	bool MoveKeysTowardsWall();

	void UpdateWallrunModeOnInputKeys();

	void UpdateWallrunAndInfoIfRayHit();

	void BeginWallrun();

	void EndWallrun();

	void UpdateWallrunSide();

	void UpdateWallrunDirection();

	void ResetWallrunTimer();

	void KeysTimerFinished();

	void ActivateWrongKeysTimer();

	void ClearWrongKeysTimer();

	void StartWallrunDelayTimer(float time);
	
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

