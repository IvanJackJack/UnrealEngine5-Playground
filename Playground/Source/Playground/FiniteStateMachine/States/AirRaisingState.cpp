// Fill out your copyright notice in the Description page of Project Settings.


#include "AirRaisingState.h"
#include "Playground/Controllers/CharacterController.h"
#include "Playground/FiniteStateMachine/StateMachineComponent.h"
#include "Playground/Utilities/CustomUtils.h"

void UAirRaisingState::Setup(FString newName, FFSMContext newContext) {
	Super::Setup(newName, newContext);
	FString stateName;

	stateName=FString("AirFallingState");
	Transitions.Add(stateName, BoolFunctionDelegate() );
	Transitions[stateName].BindUObject(this, &UAirRaisingState::TransitionToAirFalling);
}

void UAirRaisingState::OnEnter() {
	Super::OnEnter();

	if(context->characterController->characterStatus.bIsGrounded) {
		context->characterController->GroundLeft();
		context->characterController->characterStatus.bIsGrounded=false;
	}
}

void UAirRaisingState::OnTick() {
	// context->characterController->GroundCheck();
	context->characterController->ApplyAirMovement();
}

void UAirRaisingState::OnExit() {
	
}

bool UAirRaisingState::TransitionToAirFalling() {
	if(context->characterController->GetVelocity().Z < 0.f) {
		return true;
	}

	return false;
}

