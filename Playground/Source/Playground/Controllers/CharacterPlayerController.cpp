// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterPlayerController.h"
#include "Playground/UI/CustomHUD.h"
#include "Playground/Utilities/CustomUtils.h"


ACharacterPlayerController::ACharacterPlayerController() {
	
}

void ACharacterPlayerController::BeginPlay() {
	Super::BeginPlay();


	if(HUDOverlayAsset) {
		HudOverlay=CreateWidget<UCustomHUD>(this, HUDOverlayAsset);
		if(HudOverlay) {
			HudOverlay->AddToPlayerScreen();
		}
	}
	
	
}
