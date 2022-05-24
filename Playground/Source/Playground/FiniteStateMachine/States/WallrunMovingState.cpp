// Fill out your copyright notice in the Description page of Project Settings.


#include "WallrunMovingState.h"

#include "Playground/Controllers/CharacterController.h"
#include "Playground/FiniteStateMachine/StateMachineComponent.h"
#include "Playground/Utilities/CustomUtils.h"

void UWallrunMovingState::Setup(FString newName, FFSMContext newContext) {
	Super::Setup(newName, newContext);

	FString stateName;

	stateName=FString("GroundMovingState");
	Transitions.Add(stateName, BoolFunctionDelegate() );
	Transitions[stateName].BindUObject(this, &UWallrunMovingState::TransitionToGroundMoving);

	stateName=FString("GroundIdleState");
	Transitions.Add(stateName, BoolFunctionDelegate() );
	Transitions[stateName].BindUObject(this, &UWallrunMovingState::TransitionToGroundIdle);
}

void UWallrunMovingState::OnEnter() {
	Super::OnEnter();

	context->characterController->characterStatus.bIsWallrunning=true;
}

void UWallrunMovingState::OnTick() {
	context->characterController->ApplyWallrunMovement();
}

void UWallrunMovingState::OnExit() {
	context->characterController->characterStatus.bIsWallrunning=true;
}

bool UWallrunMovingState::TransitionToGroundMoving() {
	if(!context->characterController->characterStatus.bIsOverlappingPlatform 
		|| !context->characterController->inputValues.bWallrunInput) {
		return true;
	}

	return false;
}

bool UWallrunMovingState::TransitionToGroundIdle() {
	if((!context->characterController->characterStatus.bIsOverlappingPlatform 
		|| !context->characterController->inputValues.bWallrunInput)
		&& context->characterController->GetVelocity().IsNearlyZero()
		) {
		return true;
	}
	return false;
}