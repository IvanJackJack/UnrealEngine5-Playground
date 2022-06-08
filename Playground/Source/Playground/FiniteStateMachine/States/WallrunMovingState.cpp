// Fill out your copyright notice in the Description page of Project Settings.


#include "WallrunMovingState.h"

#include "Playground/Controllers/CharacterController.h"
#include "Playground/FiniteStateMachine/StateMachineComponent.h"
#include "Playground/Utilities/CustomUtils.h"

void UWallrunMovingState::Setup(FString newName, FFSMContext newContext) {
	Super::Setup(newName, newContext);

	FString stateName;

	stateName=FString("AirFallingState");
	Transitions.Add(stateName, BoolFunctionDelegate() );
	Transitions[stateName].BindUObject(this, &UWallrunMovingState::TransitionToAirFalling);

	stateName=FString("AirRaisingState");
	Transitions.Add(stateName, BoolFunctionDelegate() );
	Transitions[stateName].BindUObject(this, &UWallrunMovingState::TransitionToAirRaising);
}

void UWallrunMovingState::OnEnter() {
	Super::OnEnter();
	
	context->characterController->WallrunLand();

	context->characterController->BeginWallrun();
}

void UWallrunMovingState::OnTick() {
	context->characterController->UpdateWallrunAndInfoIfRayHit();

	context->characterController->ApplyWallrunMovement();

	

	// context->characterController->ConsumeStamina();
}

void UWallrunMovingState::OnExit() {
	context->characterController->EndWallrun();

	UCustomUtils::Print("Wallrun end cause of: " + UEnum::GetDisplayValueAsText(context->characterController->wallInfo.lastEndReason).ToString());
}

bool UWallrunMovingState::TransitionToAirFalling() {
	if(context->characterController->ShouldEndWallrun() && context->characterController->GetVelocity().Z <= 0.f) {
		return true;
	}

	return false;
}

bool UWallrunMovingState::TransitionToAirRaising() {
	if(context->characterController->characterStatus.bJumpRequested) {
		context->characterController->SetLastEndreason(EWallrunEndreason::Jump);
		return true;
	}

	if(context->characterController->ShouldEndWallrun() && context->characterController->GetVelocity().Z > 0.f) {
		return true;
	}

	return false;
}
