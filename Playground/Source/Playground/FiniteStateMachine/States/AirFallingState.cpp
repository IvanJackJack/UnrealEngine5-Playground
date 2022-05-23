// Fill out your copyright notice in the Description page of Project Settings.


#include "AirFallingState.h"
#include "Playground/Controllers/CharacterController.h"
#include "Playground/FiniteStateMachine/StateMachineComponent.h"
#include "Playground/Utilities/CustomUtils.h"

void UAirFallingState::Setup(FString newName, FFSMContext newContext) {
	Super::Setup(newName, newContext);
	FString stateName;

	stateName=FString("GroundLandedState");
	Transitions.Add(stateName, BoolFunctionDelegate() );
	Transitions[stateName].BindUObject(this, &UAirFallingState::TransitionToGroundLanded);
}

void UAirFallingState::OnEnter() {
	Super::OnEnter();

	if(context->characterController->characterStatus.bIsGrounded) {
		context->characterController->GroundLeft();
		context->characterController->characterStatus.bIsGrounded=false;
	}
}

void UAirFallingState::OnTick() {
	// context->characterController->GroundCheck();
	context->characterController->ApplyAirMovement();
}

void UAirFallingState::OnExit() {
	
}

bool UAirFallingState::TransitionToGroundLanded() {
	if(FMath::IsNearlyZero(context->characterController->GetVelocity().Z)) {
		return true;
	}

	return false;
}
