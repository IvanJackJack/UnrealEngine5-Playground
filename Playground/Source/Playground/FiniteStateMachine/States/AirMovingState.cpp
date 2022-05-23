// Fill out your copyright notice in the Description page of Project Settings.


#include "AirMovingState.h"
#include "Playground/Controllers/CharacterController.h"
#include "Playground/FiniteStateMachine/StateMachineComponent.h"
#include "Playground/Utilities/CustomUtils.h"

void UAirMovingState::Setup(FString newName, FFSMContext newContext) {
	Super::Setup(newName, newContext);

	Transitions.Add( "GroundLandedState", BoolFunctionDelegate() );
	Transitions["GroundLandedState"].BindUObject(this, &UAirMovingState::TransitionToGroundLanded);
}

void UAirMovingState::OnEnter() {

}

void UAirMovingState::OnTick() {
	context->characterController->GroundCheck();
	context->characterController->ApplyAirMovement();
}

void UAirMovingState::OnExit() {

}

bool UAirMovingState::TransitionToGroundLanded() {
	if(context->characterController->characterStatus.bIsGrounded) {
		return true;
	}
	return false;
}

