// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CustomHUD.generated.h"

/**
 * 
 */
UCLASS()
class PLAYGROUND_API UCustomHUD : public UUserWidget
{
	GENERATED_BODY()
public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class ACharacterController* CharacterController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UStateMachineComponent* StateMachine;

	virtual void NativePreConstruct() override;

	UFUNCTION(BlueprintCallable)
	float GetStaminaRatio();

	UFUNCTION(BlueprintCallable)
	float GetWallrunCancelTimerRatio();

	UFUNCTION(BlueprintCallable)
	void SetGravityModeZero();

	UFUNCTION(BlueprintCallable)
	void SetGravityModeReduced();

	UFUNCTION(BlueprintCallable)
	void SetStaminaConsumption(float amount);

	UFUNCTION(BlueprintCallable)
	void SetCancelDelay(float delay);

	UFUNCTION(BlueprintCallable)
	void UpdateGravityScale(float scale);

	UFUNCTION(BlueprintCallable)
	void SetWallrunVisualZThreshold(float amount);
};
