// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomHUD.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "Playground/Controllers/CapsuleCharacter/CharacterController.h"
#include "Playground/CustomComponents/WallrunComponent.h"
#include "Playground/Utilities/CustomUtils.h"

void UCustomHUD::NativePreConstruct() {
	Super::NativePreConstruct();

	CharacterController=Cast<ACharacterController>(GetOwningPlayerPawn());
	if(CharacterController) {
		StateMachine=CharacterController->StateMachine;
		// if(StateMachine)
		// 	UCustomUtils::Print("Custom HUD Character State Machine reference ready");
	}
}

float UCustomHUD::GetStaminaRatio() {
	if(CharacterController) {
		return CharacterController->GetStaminaRatio();
	}

	return 0.0f;
}

void UCustomHUD::SetGravityModeZero() {
	if(CharacterController) {
		CharacterController->WallrunComponent->gravityMode=EGravityMode::Zero;
		CharacterController->WallrunComponent->UpdateGravityParamsByMode();
	}
}

void UCustomHUD::SetGravityModeReduced() {
	if(CharacterController) {
		CharacterController->WallrunComponent->gravityMode=EGravityMode::Reduced;
		CharacterController->WallrunComponent->UpdateGravityParamsByMode();
	}
}

void UCustomHUD::SetStaminaConsumption(float amount) {
	if(CharacterController) {
		CharacterController->SetStaminaLoseAmount(amount);
	}
}

void UCustomHUD::UpdateGravityScale(float scale) {
	check(CharacterController);

	CharacterController->WallrunComponent->SetReducedGravity(scale);

	if(CharacterController->WallrunComponent->bIsWallrunning)
		CharacterController->WallrunComponent->UpdateGravityParamsByMode();
}

void UCustomHUD::SetWallrunVisualZThreshold(float amount) {
	check(CharacterController);
	
	CharacterController->WallrunComponent->SetVisualWallrunLookingDownThreshold(amount);
}
