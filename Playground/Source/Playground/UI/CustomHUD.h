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
};
