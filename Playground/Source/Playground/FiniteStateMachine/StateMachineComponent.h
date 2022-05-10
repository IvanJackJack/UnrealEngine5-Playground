// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StateMachineComponent.generated.h"

class UStateBase;

USTRUCT()
struct FFSMContext {
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
	class ACharacterController* characterController;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PLAYGROUND_API UStateMachineComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStateMachineComponent();

public:
	UPROPERTY(VisibleAnywhere)
	FFSMContext context;

	UPROPERTY(VisibleAnywhere)
	UStateBase* currentState;

	UPROPERTY(EditAnywhere)
	TMap<FString, TSubclassOf<UStateBase>> statesMap;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	FORCEINLINE void SetContext(FFSMContext newContext){ context = newContext; }

	void InitializeStates();

	void SetCurrentState(UStateBase* newState);
};
