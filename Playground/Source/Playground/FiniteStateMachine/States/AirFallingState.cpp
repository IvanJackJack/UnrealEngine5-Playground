// Fill out your copyright notice in the Description page of Project Settings.


#include "AirFallingState.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "Playground/Controllers/CharacterController.h"
#include "Playground/FiniteStateMachine/StateMachineComponent.h"
#include "Playground/Utilities/CustomUtils.h"

void UAirFallingState::Setup(FString newName, FFSMContext newContext) {
	Super::Setup(newName, newContext);
	FString stateName;

	stateName=FString("GroundLandedState");
	Transitions.Add(stateName, BoolFunctionDelegate() );
	Transitions[stateName].BindUObject(this, &UAirFallingState::TransitionToGroundLanded);

	stateName=FString("WallrunMovingState");
	Transitions.Add(stateName, BoolFunctionDelegate() );
	Transitions[stateName].BindUObject(this, &UAirFallingState::TransitionToWallrunMoving);

	stateName=FString("AirRaisingState");
	Transitions.Add(stateName, BoolFunctionDelegate() );
	Transitions[stateName].BindUObject(this, &UAirFallingState::TransitionToAirRaising);

}

void UAirFallingState::OnEnter() {
	Super::OnEnter();

	if(context->characterController->characterStatus.bIsGrounded) {
		context->characterController->GroundLeft();
		// context->characterController->ConsumeJump();
	}

	// if(context->characterController->characterStatus.bWasWallrunning) {
	// 	context->characterController->characterStatus.bWasWallrunning=false;
	// }
}

void UAirFallingState::OnTick() {
	context->characterController->ApplyAirMovement();

	context->characterController->ClampHorizontalVelocity();
}

void UAirFallingState::OnExit() {
	
}

bool UAirFallingState::TransitionToGroundLanded() {
	if(FMath::IsNearlyZero(context->characterController->GetVelocity().Z)) {
		return true;
	}

	return false;
}

bool UAirFallingState::TransitionToWallrunMoving() {
	if(context->characterController->HasValidHit()) {
		if(context->characterController->CanWallrun()) {
			return true;
		}
	}
	
	return false;
}

bool UAirFallingState::TransitionToAirRaising() {
	if(context->characterController->characterStatus.bJumpRequested) {
		if(context->characterController->ConsumeJump()) {
			return true;
		}
	}

	return false;
}
