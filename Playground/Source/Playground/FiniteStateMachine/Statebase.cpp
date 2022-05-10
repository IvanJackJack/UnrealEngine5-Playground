// Fill out your copyright notice in the Description page of Project Settings.


#include "StateBase.h"
#include "StateMachineComponent.h"

//UStateBase::UStateBase() {
//
//}

void UStateBase::Setup(FString newName, FFSMContext newContext) {
	name=newName;
	*context = newContext;
}

void UStateBase::OnEnter() {

}

void UStateBase::OnTick() {

}

void UStateBase::OnExit() {

}

float UStateBase::CanTransition() {
	return 0.0f;
}
