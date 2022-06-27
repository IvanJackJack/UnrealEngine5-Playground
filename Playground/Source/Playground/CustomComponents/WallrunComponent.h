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
	LowVelocity UMETA(DisplayName = "LowVelocity"),
	Jump UMETA(DisplayName = "Jump"),
	SideChange UMETA(DisplayName = "SideChange"),
	NoHit UMETA(DisplayName = "NoHit"),
	WrongDirection UMETA(DisplayName = "WrongDirection"),
	WrongMode UMETA(DisplayName = "WrongMode"),
	Forced UMETA(DisplayName = "Forced")
};

UENUM(BlueprintType)
enum class EWallrunMode : uint8 {
	Horizontal UMETA(DisplayName = "Horizontal"),
	Vertical UMETA(DisplayName = "Vertical"),
	Diagonal UMETA(DisplayName = "Diagonal"),
	Visual UMETA(DisplayName = "Visual"),

	None UMETA(DisplayName = "None")
};

UENUM(BlueprintType)
enum class EGravityMode : uint8 {
	Zero UMETA(DisplayName = "Zero"),
	Reduced UMETA(DisplayName = "Reduced"),
	StaminaBased UMETA(DisplayName = "StaminaBased")
};

UENUM(BlueprintType)
enum class EWallrunEndConditions : uint8 {
	Standard UMETA(DisplayName = "Standard"),
	Stamina UMETA(DisplayName = "Stamina"),
	Time UMETA(DisplayName = "Time")
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
	bool bIsWallrunning;
	bool bIsFirstVelocityRequest;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	FVector wallNormal;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	FVector wallUpward;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	FVector wallSideward;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	float wallAngle;
	FVector lastValidWallNormal;
	FHitResult currentValidHit;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	FVector wallrunDirection;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	FVector wallrunVelocity;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	FVector moveDirectionAlongWallAxis;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	FVector lookingMoveDirectionAlongWallAxis;

	

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	FVector playerToWallVector;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Status)
	bool bLaunchOverrideXY=true;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Status)
	bool bLaunchOverrideZ=true;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Status)
	float reducedGravityMult=1;

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
	bool bAlwaysStickToWall = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	bool bCancelWallrunWhenSideChanges = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	bool bUseCharacterMaxWalkableAngle = false;

	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Parameters)
	float rayCheckForWallLength;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float visualWallrunMinVerticalValue=0.175f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)

	//put this to -1 to wallrun even when looking down
	float visualWallrunLookingDownThreshold=-0.5f;

	//put this to 0 to remove front side, or a low value to enable front side
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float lateralSideDotThreshold=0.f;

	//offset used to change side from left to right, and viceversa, when value 0 is approached
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float lateralSideChangeDotOffset=0.25f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float velocityWallrunThreshold=100.f;

	//angle of wall normal with horizontal plane must be less than this value
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float wallrunAngleThreshold=40.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float velocityAccelerationRatio=50.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float initialAirControl;


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	EGravityMode gravityMode;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float reducedGravity=0.2f;

	
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	EWallrunMode desiredHorizontalMode;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	EWallrunMode desiredVerticalMode;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	EWallrunMode desiredDiagonalMode;

#pragma endregion

#pragma region Timers
	FTimerHandle wallrunLockTimer;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float wallrunLockDelay=0.5f;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	bool wallrunLockTimerExpired = true;

	FTimerHandle wallrunCancelTimer;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float wallrunCancelDelay=5.f;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	bool bForceCancelWallrun = true;

#pragma endregion
	
#pragma region GettersSetters
public: 
	FORCEINLINE
	void SetLastEndreason(EWallrunEndreason endReason) { lastEndReason = endReason; }

	FORCEINLINE
	void SetCharacter(ACharacterController* character) { Character=character;}

	FVector GetVelocity();

	//DA RIVEDERE SE FUNZIONA BENE, CAMBIALE MOVE ACCEL
	FVector GetInterpVelocity();
	//DA RIVEDERE
	FVector GetVelocityByMode();
	
	FString GetWallSide();

	float GetCancelTimerRatio();

	FORCEINLINE
	void SetWallrunCancelDelay(float delay){wallrunCancelDelay=delay;}

	FORCEINLINE
	void SetVisualWallrunMinVerticalValue(float value){ visualWallrunMinVerticalValue=value;}

	FORCEINLINE
	void SetVisualWallrunLookingDownThreshold(float value){ visualWallrunLookingDownThreshold=value;}

	FORCEINLINE
	void SetReducedGravity(float value){ reducedGravity=value;}

	FORCEINLINE
	void SetGravityMode(EGravityMode mode){gravityMode=mode;}
#pragma endregion

#pragma region WallrunStatus

	void ResetHitAndWallInfo();

	void UpdateWallInfo(const FHitResult& Hit);

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

	UFUNCTION(BlueprintCallable)
	bool HasValidHit();

	UFUNCTION(BlueprintCallable)
	bool IsCharacterNearWall();

	bool CanRegisterHit();

	FORCEINLINE
	void ForceWallrunEnd() { bForceCancelWallrun=true; }

	void UpdateGravityParamsByMode();


#pragma endregion

#pragma region WallrunMovement

	void UpdateWallrunModeOnInputKeys();

	void UpdateWallrunAndInfoIfRayHit();
	
	void UpdateWallrunSide();

	void UpdateWallrunDirection();
	
#pragma endregion

#pragma region UtilitiesFunctions

	bool RaycastFromCapsule(FHitResult& Hit, FVector End);
	
	bool RaycastInMoveDirection();

	FVector MoveTowardsVector(FVector current, FVector target, float accel);

	float GetHorizontalAngle(FVector direction);

	float GetVerticalAngle(FVector direction);

	FORCEINLINE
	float CalculateCombinationPowSqrtOfValue(float value, float halfPow=0.5f, float halfSqrt=0.334f) {
		return ( halfSqrt*FMath::Sqrt(value) + halfPow*FMath::Pow(value, 2) );
	}

	FORCEINLINE
	float CalculateCustomLogisticOfValue(float value, float logisticMax = 1, float logisticOffset = 0.75f, float logisticScale = 2.334f) {
		return ( logisticMax / (1 + FMath::Exp(-logisticScale * (value - logisticOffset))) );
	}

	FVector ProjectVectorAlongWallPlane(FVector vector);

#pragma endregion

};
