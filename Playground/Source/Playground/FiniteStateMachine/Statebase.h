// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Statebase.generated.h"


struct FFSMContext;

UCLASS()
class PLAYGROUND_API UStatebase : public UObject
{
	GENERATED_BODY()

public:
	UStatebase();

public:
	UPROPERTY(VisibleAnywhere)
	FString name;

	FFSMContext* context;

public:
	virtual void Setup(FString newName, FFSMContext newContext);

	virtual void OnEnter();
	virtual void OnTick();
	virtual void OnExit();
};
