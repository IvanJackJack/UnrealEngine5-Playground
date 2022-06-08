#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WallrunComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PLAYGROUND_API UWallrunComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UWallrunComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
