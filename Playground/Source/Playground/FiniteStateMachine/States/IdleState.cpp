// Fill out your copyright notice in the Description page of Project Settings.


#include "IdleState.h"
#include "Playground/Controllers/CharacterController.h"
#include "Playground/FiniteStateMachine/StateMachineComponent.h"
#include "Playground/Utilities/CustomUtils.h"


void UIdleState::Setup(FString newName, FFSMContext newContext) {
	Super::Setup(newName, newContext);

	Transitions.Add( "GroundMovingState", BoolFunctionDelegate() );
	Transitions["GroundMovingState"].BindUObject(this, &UIdleState::TransitionToGroundMoving);

	// Transitions.Add( "AirMovingState", BoolFunctionDelegate() );
	// Transitions["AirMovingState"].BindUObject(this, &UIdleState::TransitionToAirMoving);

	Transitions.Add( "AirRaisingState", BoolFunctionDelegate() );
	Transitions["AirRaisingState"].BindUObject(this, &UIdleState::TransitionToAirRaising);

	// Transitions.Add( "AirFallingState", BoolFunctionDelegate() );
	// Transitions["AirFallingState"].BindUObject(this, &UIdleState::TransitionToAirFalling);
}

void UIdleState::OnEnter() {
	Super::OnEnter();
}

void UIdleState::OnTick() {
	// context->characterController->GroundCheck();
	context->characterController->ApplyGroundMovement();
}

void UIdleState::OnExit() {

}

bool UIdleState::TransitionToGroundMoving() {
	if(!context->characterController->GetVelocity().IsNearlyZero()) {
		return true;
	}
	return false;
}

// bool UIdleState::TransitionToAirMoving() {
// 	if(!context->characterController->characterStatus.bIsGrounded) {
// 		return true;
// 	}
// 	return false;
// }

bool UIdleState::TransitionToAirRaising() {
	if(context->characterController->GetVelocity().Z > 0.f) {
		return true;
	}

	return false;
}

bool UIdleState::TransitionToAirFalling() {
	if(context->characterController->GetVelocity().Z < 0.f) {
		return true;
	}

	return false;
}
