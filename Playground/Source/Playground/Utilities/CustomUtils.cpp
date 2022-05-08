// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomUtils.h"

//UCustomUtils::UCustomUtils(const FObjectInitializer& ObjectInitializer)
//	: Super(ObjectInitializer)
//{
//	
//}

void UCustomUtils::Print(const FString& toPrint) {
	/*FString text=toPrint.c_str();*/

	if(GEngine)
		GEngine->AddOnScreenDebugMessage(
			-1, 
			15.0f, 
			FColor::Yellow, 
			*toPrint
		);
}
