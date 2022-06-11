#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ReidsCharacter.generated.h"

UENUM(BlueprintType)
enum class EReidsWallrunSide : uint8 {
	Left UMETA(DisplayName = "Left"),
	Right UMETA(DisplayName = "Right")
};

UENUM(BlueprintType)
enum class EReidsWallrunEndreason : uint8 {
	Fall UMETA(DisplayName = "Fall"),
	Jump UMETA(DisplayName = "Jump")
};

UCLASS()
class PLAYGROUND_API AReidsCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AReidsCharacter();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	virtual void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

	virtual void Landed(const FHitResult& Hit) override;

public: 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component)
	class USpringArmComponent* CameraBoom;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component)
	class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component)
	class UCapsuleComponent* Capsule;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component)
	class UCharacterMovementComponent* Movement;

	FVector inputValuesMove;
	bool inputValuesJump;

public: 
	void ReadMoveForwardInput(float value);

	void ReadMoveSidewardInput(float value);

	void TurnCamera(float Rate);

	void LookUpCamera(float Rate);

	void ReadJumpInputStart();

	void ReadJumpInputEnd();

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	FVector wallrunDirection;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	bool bIsWallrunning;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	int jumpsLeft;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	int jumpsMax = 2;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	float rightAxis; //sideward input value
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	float forwardAxis; //forward input value

	
	FVector characterForward;
	FVector characterRight;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	FVector currentCharacterMovement;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	FVector characterDirection;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	EReidsWallrunSide wallrunSide; //da che parte, rispetto al muro, sono
	EReidsWallrunEndreason wallrunEndReason;

public:
	void UpdateMovement();
	void ApplyMovement();
	void GroundLeft();
	void GroundLand();

	bool MovingForward();
	bool OnForward();
	bool ConsumeJump();
	void ResetJump(int jumps);
	void BeginWallrun();
	void EndWallrun(EReidsWallrunEndreason endreason);

	UFUNCTION(BlueprintNativeEvent)
	void BeginCameraTilt();
	UFUNCTION(BlueprintNativeEvent)
	void EndCameraTilt();

	void FindRunDirectionAndSide(FVector wallNormal);
	bool CanSurfaceBeWallran(FVector surfaceNormal);
	FVector FindLaunchVelocity(); //find initial jump velocity
	bool AreRequiredKeysDown();

	FVector GetHorizontalVelocity();
	void SetHorizontalVelocity(FVector velocity);
	void ClampHorizontalVelocity();

	void UpdateWallrun();
};
