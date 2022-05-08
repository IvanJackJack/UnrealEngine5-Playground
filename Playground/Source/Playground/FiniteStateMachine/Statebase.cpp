// Fill out your copyright notice in the Description page of Project Settings.


#include "Statebase.h"
#include "Playground/Controllers/CharacterController.h"
#include "StateMachineComponent.h"

UStatebase::UStatebase() {
	
}

void UStatebase::Setup(FString newName, FFSMContext newContext) {
	name=newName;
	*context = newContext;
}

void UStatebase::OnEnter() {

}

void UStatebase::OnTick() {

}

void UStatebase::OnExit() {

}
