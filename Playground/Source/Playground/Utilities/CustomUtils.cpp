// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomUtils.h"

void UCustomUtils::Print(const FString& toPrint) {
	if(GEngine)
		GEngine->AddOnScreenDebugMessage(
			-1, 
			5.0f, 
			FColor::Yellow, 
			*toPrint
		);
}

void UCustomUtils::Print(const FString& toPrint, float time) {
	if(GEngine)
		GEngine->AddOnScreenDebugMessage(
			-1, 
			time, 
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

bool UCustomUtils::Raycast(FHitResult& Hit, FVector Start, FVector End, const AActor* Ignored) {
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(Ignored);

	return GetWorld()->LineTraceSingleByChannel(
		Hit, 
		Start, 
		End,
		ECC_Visibility,
		collisionParams,
		FCollisionResponseParams::DefaultResponseParam );
}
