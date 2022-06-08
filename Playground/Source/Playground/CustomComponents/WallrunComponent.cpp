#include "WallrunComponent.h"

UWallrunComponent::UWallrunComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

}

void UWallrunComponent::BeginPlay()
{
	Super::BeginPlay();


}

void UWallrunComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

