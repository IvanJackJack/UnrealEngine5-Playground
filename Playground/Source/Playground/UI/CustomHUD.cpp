// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomHUD.h"
#include "Playground/Controllers/CapsuleCharacter/CharacterController.h"
#include "Playground/CustomComponents/WallrunComponent.h"
#include "Playground/Utilities/CustomUtils.h"

void UCustomHUD::NativePreConstruct() {
	Super::NativePreConstruct();

	CharacterController=Cast<ACharacterController>(GetOwningPlayerPawn());
	if(CharacterController) {
		StateMachine=CharacterController->StateMachine;
		if(StateMachine)
			UCustomUtils::Print("Custom HUD Character State Machine reference ready");
	}
}

float UCustomHUD::GetStaminaRatio() {
	if(CharacterController) {
		return CharacterController->GetStaminaRatio();
	}

	return 0.0f;
}

float UCustomHUD::GetWallrunCancelTimerRatio() {
	if(CharacterController) {
		return CharacterController->WallrunComponent->GetCancelTimerRatio();
	}

	return 0.0f;
}

void UCustomHUD::SetGravityModeZero() {
	if(CharacterController) {
		CharacterController->WallrunComponent->gravityMode=EGravityMode::Zero;
		CharacterController->WallrunComponent->UpdateGravityMode();
	}
}

void UCustomHUD::SetGravityModeReduced() {
	if(CharacterController) {
		CharacterController->WallrunComponent->gravityMode=EGravityMode::Reduced;
		CharacterController->WallrunComponent->UpdateGravityMode();
	}
}
