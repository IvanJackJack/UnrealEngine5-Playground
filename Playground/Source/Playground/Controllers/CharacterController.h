// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterController.generated.h"

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
	FVector groundNormal;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector groundForward;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector groundSideward;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector characterForward;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector characterSideward;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector moveDirection; //calcolata quando applico il movimento
							//devo provare a cambiare gli assi, usando la groundNormal
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector moveVelocity; //in teoria se la normalizzo ottengo moveDirection

	FRotator characterRotation;

	float stamina;

	
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

#pragma endregion

#pragma region Components
public: //Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component)
	class USpringArmComponent* CameraBoom;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component)
	class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component)
	class UCapsuleComponent* Capsule;

	// UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component)
	// class UCapsuleComponent* OverlapCapsule;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component)
	class UCharacterMovementComponent* Movement;
	//class UCustomCharacterMovementComponent* Movement;

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

#pragma endregion

#pragma region GettersSetters
public: //Getters and Setters
	FORCEINLINE
	class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	FORCEINLINE
	class UCameraComponent* GetCamera() const { return Camera; }

#pragma endregion

#pragma region InputHandlingFunctions
public: //Input Functions
	void ReadMoveForwardInput(float value);

	void ReadMoveSidewardInput(float value);

	void TurnCamera(float Rate);

	void LookUpCamera(float Rate);

	void ReadJumpInputStart();

	void ReadJumpInputEnd();

	void ReadWallrunInputStart();

	void ReadWallrunInputEnd();

#pragma endregion

#pragma region StatusFunctions
	void UpdateStatus();

	void UpdateLastVelocity();

	void GroundCheck();

	void GroundLeft();

	void GroundLand();

	void PlatformOverlap();

	void PlatformLeft();

	void WallAxisUpdateOnHit(const FHitResult& Hit);

	bool CanWallrun();

#pragma endregion

#pragma region MovementFunctions

public: //Movement Functions
	void ApplyGroundMovement();

	void ApplyAirMovement();

	void ApplyWallrunMovement();

	void ApplyGroundJump();

	void ApplyWallrunJump();

#pragma endregion


};
