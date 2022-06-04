#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomUtils.generated.h"

/**
 * 
 */
UCLASS()
class PLAYGROUND_API UCustomUtils : public UObject
{
	GENERATED_BODY()

public:
	static void Print(const FString& toPrint);
	static void Print(const FString& toPrint, float time);
	static void Print(const float value);
	static void Print(const FVector vector);
	bool Raycast(FHitResult& Hit, FVector Start, FVector End, const AActor* Ignored);
};
