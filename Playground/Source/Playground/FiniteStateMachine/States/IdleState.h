// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Playground/FiniteStateMachine/StateBase.h"
#include "IdleState.generated.h"


/**
 * 
 */
UCLASS(Blueprintable)
class PLAYGROUND_API UIdleState : public UStateBase
{
	GENERATED_BODY()

public:
	virtual void OnEnter() override;
	virtual void OnTick() override;
	virtual void OnExit() override;
};
