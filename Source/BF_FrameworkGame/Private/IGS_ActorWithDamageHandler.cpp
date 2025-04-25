#include "IGS_ActorWithDamageHandler.h"
#include "IGS_DamageHandlerComponent.h"

AIGS_ActorWithDamageHandler::AIGS_ActorWithDamageHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TeamSide = EIGS_TeamSideEnum::TS_Unknown;
    this->DamageHandler = CreateDefaultSubobject<UIGS_DamageHandlerComponent>(TEXT("Damage Handler"));
}


