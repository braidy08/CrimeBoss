#include "IGS_StaticMeshInventoryItemPickup.h"
#include "Components/StaticMeshComponent.h"

AIGS_StaticMeshInventoryItemPickup::AIGS_StaticMeshInventoryItemPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PickupStaticMeshComp = (UStaticMeshComponent*)RootComponent;
    (*this).DefaultMesh = nullptr;
    (*this).bIsShineEnabled = true;
    (*this).bTakeMeshFromDatabase = true;
    (*this).PickupMeshComp = (UPrimitiveComponent*)RootComponent;
    (*this).SceneRoot = (USceneComponent*)RootComponent;
}

void AIGS_StaticMeshInventoryItemPickup::SetIsShineEnabled(bool inEnabled) {
}


