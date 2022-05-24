// Fill out your copyright notice in the Description page of Project Settings.


#include "GroundLandedState.h"

#include "Playground/Controllers/CharacterController.h"
#include "Playground/FiniteStateMachine/StateMachineComponent.h"
#include "Playground/Utilities/CustomUtils.h"

void UGroundLandedState::Setup(FString newName, FFSMContext newContext) {
	Super::Setup(newName, newContext);

	Transitions.Add( "GroundMovingState", BoolFunctionDelegate() );
	Transitions["GroundMovingState"].BindUObject(this, &UGroundLandedState::TransitionToGroundMoving);

	Transitions.Add( "GroundIdleState", BoolFunctionDelegate() );
	Transitions["GroundIdleState"].BindUObject(this, &UGroundLandedState::TransitionToGroundIdle);
}

void UGroundLandedState::OnEnter() {
	Super::OnEnter();

	if(context->characterController->characterStatus.bIsGrounded) {
		return;
	}

	context->characterController->GroundLand();
}

void UGroundLandedState::OnTick() {
}

void UGroundLandedState::OnExit() {
	Super::OnExit();
}

bool UGroundLandedState::TransitionToGroundIdle() {
	if(context->characterController->GetVelocity().IsNearlyZero()) {
		return true;
	}
	return false;
}

bool UGroundLandedState::TransitionToGroundMoving() {
	if(!context->characterController->GetVelocity().IsNearlyZero()) {
		return true;
	}
	return false;
}
