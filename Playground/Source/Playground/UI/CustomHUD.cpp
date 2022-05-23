// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomHUD.h"
#include "Playground/Controllers/CharacterController.h"
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