#include "IGS_WalkieTalkie.h"
#include "Components/StaticMeshComponent.h"
#include "IGS_InteractiveComponent.h"

AIGS_WalkieTalkie::AIGS_WalkieTalkie(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).InteractiveComponent = CreateDefaultSubobject<UIGS_InteractiveComponent>(TEXT("Pickup Interaction"));
    (*this).PickupMeshComp = (UPrimitiveComponent*)RootComponent;
    (*this).SceneRoot = (USceneComponent*)RootComponent;
    (*this).InteractiveComponent->SetupAttachment((*this).RootComponent);
}



