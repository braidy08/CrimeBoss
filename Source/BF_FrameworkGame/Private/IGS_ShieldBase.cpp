#include "IGS_ShieldBase.h"
#include "Components/StaticMeshComponent.h"

AIGS_ShieldBase::AIGS_ShieldBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShieldMesh"));
    this->ShieldMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->OptionalBreakableWindowComponent = NULL;
    this->OptionalBreakableWindowObjectStatusComponent = NULL;
}



