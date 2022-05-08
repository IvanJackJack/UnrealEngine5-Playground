// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IMovementController.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIMovementController : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PLAYGROUND_API IIMovementController
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	void MoveForward();
	void MoveSideward();
	void GroundCheck();

};
