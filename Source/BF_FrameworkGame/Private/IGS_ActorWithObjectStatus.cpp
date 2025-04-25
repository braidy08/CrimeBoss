#include "IGS_ActorWithObjectStatus.h"
#include "IGS_ObjectStatus.h"

AIGS_ActorWithObjectStatus::AIGS_ActorWithObjectStatus(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ObjectStatus = CreateDefaultSubobject<UIGS_ObjectStatus>(TEXT("Object Status"));
}


