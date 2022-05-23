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

	FVector groundNormal;

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

	//Ground
    float groundSpeed = 4.f;
    float grounAccel = 20.f;

    //Air
    float airSpeed = 3.f;
    float airAccel = 20.f;

    //Jump
    float jumpUpSpeed = 9.2f;
    float dashSpeed = 6.f;

    //Wall
    float wallSpeed = 10.f;
    float wallClimbSpeed = 4.f;
    float wallAccel = 20.f;
    float wallRunTime = 3.f;
    float wallStickiness = 20.f;
    float wallStickDistance = 1.f;
    float wallFloorBarrier = 40.f;
    float wallBanTime = 4.f;
    FVector bannedGroundNormal;

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

#pragma region StatusCheckFunctions
	void UpdateLastVelocity();

	void GroundCheck();

	void GroundLeft();

	void GroundLand();

#pragma endregion

#pragma region MovementFunctions

public: //Movement Functions
	void ApplyGroundMovement();

	void ApplyAirMovement();

#pragma endregion


};
