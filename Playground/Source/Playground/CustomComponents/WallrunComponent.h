//Wallrun component based on reids wallrun tutorial series

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WallrunComponent.generated.h"

UENUM(BlueprintType)
enum class EWallrunSide : uint8 {
	Left UMETA(DisplayName = "Left"),
	Right UMETA(DisplayName = "Right"),
	Front UMETA(DisplayName = "Front"),

	None UMETA(DisplayName = "None")
};

UENUM(BlueprintType)
enum class EWallrunEndreason : uint8 {
	Fall UMETA(DisplayName = "Fall"),
	Jump UMETA(DisplayName = "Jump"),
	WrongKeys UMETA(DisplayName = "WrongKeys"),
	SideChange UMETA(DisplayName = "SideChange"),
	NoHit UMETA(DisplayName = "NoHit"),
	WrongDirection UMETA(DisplayName = "WrongDirection"),
	WrongMode UMETA(DisplayName = "WrongMode")
};

UENUM(BlueprintType)
enum class EWallrunMode : uint8 {
	Horizontal UMETA(DisplayName = "Horizontal"),
	Vertical UMETA(DisplayName = "Vertical"),
	Diagonal UMETA(DisplayName = "Diagonal"),
	Visual UMETA(DisplayName = "Visual"),

	None UMETA(DisplayName = "None")
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PLAYGROUND_API UWallrunComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UWallrunComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	class ACharacterController* Character;

#pragma region Status
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	FVector wallNormal;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	FVector wallUpward;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	FVector wallSideward;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	float wallAngle;

	FVector lastValidNormal;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	FVector wallrunMoveDirection;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	FVector moveDirectionAlongWallAxis;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	FVector lookingMoveDirectionAlongWallAxis;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	bool wallrunTimerExpired = true;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	FHitResult currentValidHit;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	EWallrunSide wallrunSide;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	EWallrunSide startingLateralWallSide;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	EWallrunEndreason lastEndReason;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	EWallrunMode wallrunMode;
#pragma endregion

#pragma region Parameters
public: 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float wallrunDelay=0.5f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float checkWallRayLength;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float visualWallrunMinVerticalValue=0.175f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float visualWallrunLookingDownThreshold=-0.5f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float frontSideThreshold=0.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float lateralSideChangeThreshold=0.2f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float velocityWallrunThreshold=100.f;

	// UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	// float wallAngleDotThreshold=0.5f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float maxWallrunAngle=45.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float velocityAccelerationRatio=50.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float initialAirControl;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	bool bAlwaysStickToWall;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	EWallrunMode desiredHorizontalMode;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	EWallrunMode desiredVerticalMode;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	EWallrunMode desiredDiagonalMode;

#pragma endregion

#pragma region Timers
	FTimerHandle wallrunDelayTimer;
#pragma endregion
	
#pragma region GettersSetters
public: 
	FORCEINLINE
	void SetLastEndreason(EWallrunEndreason endReason) { lastEndReason = endReason; }

	FORCEINLINE
	void SetCharacter(ACharacterController* character) { Character=character;}

	FVector GetVelocity();

	FVector GetInterpVelocity();

	FVector GetVelocityByMode();

	UFUNCTION(BlueprintCallable)
	FString GetWallSide();

#pragma endregion

#pragma region WallrunStatus

	void ResetHitAndWallInfo();

	void UpdateWallInfo(const FHitResult& Hit);

	void UpdateWallInfo();

	bool HasValidHit();

	bool IsValidForWallrun(FVector surfaceNormal);

	bool CanWallrun();

	bool ShouldEndWallrun();

	void BeginWallrun();

	void EndWallrun();

	void StartWallrunDelayTimer(float time);

	void ResetWallrunTimer();

	bool CancelConditionsByMode();

	bool IsMoveDirectionTowardsWall();

	bool LookingDownOverThreshold();

#pragma endregion

#pragma region WallrunMovement

	void UpdateWallrunModeOnInputKeys();

	void UpdateWallrunAndInfoIfRayHit();
	
	void UpdateWallrunSide();

	void UpdateWallrunDirection();
	
	void SnapToWall();
	
#pragma endregion

#pragma region UtilitiesFunctions

	bool RaycastFromCapsule(FHitResult& Hit, FVector End);
	
	bool RaycastInMoveDirection();

	FVector MoveTowardsVector(FVector current, FVector target, float accel);

	float GetHorizontalAngle(FVector direction);

#pragma endregion

};
