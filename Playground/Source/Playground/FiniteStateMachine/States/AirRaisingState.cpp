// Fill out your copyright notice in the Description page of Project Settings.


#include "AirRaisingState.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "Playground/Controllers/CharacterController.h"
#include "Playground/FiniteStateMachine/StateMachineComponent.h"
#include "Playground/Utilities/CustomUtils.h"

void UAirRaisingState::Setup(FString newName, FFSMContext newContext) {
	Super::Setup(newName, newContext);
	FString stateName;

	stateName=FString("AirFallingState");
	Transitions.Add(stateName, BoolFunctionDelegate() );
	Transitions[stateName].BindUObject(this, &UAirRaisingState::TransitionToAirFalling);

	stateName=FString("GroundLandedState");
	Transitions.Add(stateName, BoolFunctionDelegate() );
	Transitions[stateName].BindUObject(this, &UAirRaisingState::TransitionToGroundLanded);

	stateName=FString("WallrunMovingState");
	Transitions.Add(stateName, BoolFunctionDelegate() );
	Transitions[stateName].BindUObject(this, &UAirRaisingState::TransitionToWallrunMoving);
}

void UAirRaisingState::OnEnter() {
	Super::OnEnter();

	if(!context->characterController->Movement->IsFalling()) {
		context->characterController->ApplyGroundJump();
		context->characterController->GroundLeft();
	}
	else {
		if(!context->characterController->characterStatus.bWasWallrunning) {
			context->characterController->ApplyAirJump();
		}else {
			context->characterController->ApplyWallrunJump();
			context->characterController->GroundLeft();
			context->characterController->characterStatus.bWasWallrunning=false;
		}
	}
	
}

void UAirRaisingState::OnTick() {
	if(context->characterController->inputValues.bJumpInput) {
		if(context->characterController->ConsumeJump()) {
			context->characterController->ApplyAirJump();
		}
	}
	
	context->characterController->ApplyAirMovement();

	context->characterController->ClampHorizontalVelocity();
}

void UAirRaisingState::OnExit() {
	
}

bool UAirRaisingState::TransitionToAirFalling() {
	if(context->characterController->GetVelocity().Z < 0.f) {
		return true;
	}

	return false;
}

bool UAirRaisingState::TransitionToGroundLanded() {
	if(FMath::IsNearlyZero(context->characterController->GetVelocity().Z)) {
		return true;
	}

	return false;
}

bool UAirRaisingState::TransitionToWallrunMoving() {
	if(context->characterController->CanWallrun()) {
		return true;
	}

	return false;
}

