// Fill out your copyright notice in the Description page of Project Settings.


#include "IdleState.h"
#include "Playground/Controllers/CharacterController.h"
#include "Playground/FiniteStateMachine/StateMachineComponent.h"
#include "Playground/Utilities/CustomUtils.h"


void UIdleState::Setup(FString newName, FFSMContext newContext) {
	Super::Setup(newName, newContext);

	FString stateName;

	stateName=FString("WallrunMovingState");
	Transitions.Add(stateName, BoolFunctionDelegate() );
	Transitions[stateName].BindUObject(this, &UIdleState::TransitionToWallrunMoving);

	Transitions.Add( "GroundMovingState", BoolFunctionDelegate() );
	Transitions["GroundMovingState"].BindUObject(this, &UIdleState::TransitionToGroundMoving);


	// AddTransition("GroundMovingState", &UIdleState::TransitionToGroundMoving);
	
	Transitions.Add( "AirRaisingState", BoolFunctionDelegate() );
	Transitions["AirRaisingState"].BindUObject(this, &UIdleState::TransitionToAirRaising);
	
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
	if(context->characterController->inputValues.bJumpInput) {
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

bool UIdleState::TransitionToWallrunMoving() {
	if(context->characterController->characterStatus.bIsOverlappingPlatform 
		&& context->characterController->inputValues.bWallrunInput) {
		return true;
	}

	return false;
}
