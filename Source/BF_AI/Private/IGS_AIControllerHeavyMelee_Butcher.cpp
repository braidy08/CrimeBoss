#include "IGS_AIControllerHeavyMelee_Butcher.h"

AIGS_AIControllerHeavyMelee_Butcher::AIGS_AIControllerHeavyMelee_Butcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSawBroken = false;
    this->bTargetUnreachable = false;
    this->SecondaryMeleeWeaponDefinition = NULL;
    this->SawWieldable = NULL;
}

void AIGS_AIControllerHeavyMelee_Butcher::NotifySawBroke() {
}


