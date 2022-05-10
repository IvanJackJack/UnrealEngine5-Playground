// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StateBase.generated.h"


struct FFSMContext;

UCLASS()
class PLAYGROUND_API UStateBase : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FString name;

	FFSMContext* context;

public:
	//UStateBase();

	virtual void Setup(FString newName, FFSMContext newContext);

	virtual void OnEnter();
	virtual void OnTick();
	virtual void OnExit();

	virtual float CanTransition();
};
