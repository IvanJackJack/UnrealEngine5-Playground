// Fill out your copyright notice in the Description page of Project Settings.


#include "StateMachineComponent.h"
#include "StateBase.h"
#include "Playground/Utilities/CustomUtils.h"

// Sets default values for this component's properties
UStateMachineComponent::UStateMachineComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	
	
}


// Called when the game starts
void UStateMachineComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
	UStateBase* state = nullptr;
	state = statesMap.Find(TEXT("IdleState"))->GetDefaultObject();
	if(state) {
		SetCurrentState(state);
	}
}


// Called every frame
void UStateMachineComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	if(currentState) {
		currentState->OnTick();
	}
}

void UStateMachineComponent::InitializeStates() {
}

void UStateMachineComponent::SetCurrentState(UStateBase* newState) {
	if(currentState) {
		currentState->OnExit();
	}

	currentState=newState;

	currentState->OnEnter();
}

