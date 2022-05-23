// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomUtils.h"

//UCustomUtils::UCustomUtils(const FObjectInitializer& ObjectInitializer)
//	: Super(ObjectInitializer)
//{
//	
//}

void UCustomUtils::Print(const FString& toPrint) {
	if(GEngine)
		GEngine->AddOnScreenDebugMessage(
			-1, 
			15.0f, 
			FColor::Yellow, 
			*toPrint
		);
}

void UCustomUtils::Print(const float value) {
	FString toPrint=FString::SanitizeFloat(value);

	Print(toPrint);
}

void UCustomUtils::Print(const FVector vector) {
	FString toPrint=vector.ToString();

	Print(toPrint);
}
