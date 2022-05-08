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
};
