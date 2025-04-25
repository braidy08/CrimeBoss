#include "IGS_DamageTypeBase.h"

UIGS_DamageTypeBase::UIGS_DamageTypeBase() {
    this->DamageType = EIGS_DamageType::Unknown;
    this->HeisterReceiveDamageMult = 1.00f;
    this->AmbientReceiveDamageMult = 1.00f;
    this->bCanKillBots = true;
    this->bShouldConsiderBodyParts = true;
    this->bShouldBeAffectedByDamageLimiter = false;
    this->bIgnoresPawns = false;
    this->bInstantRagdoll = false;
    this->StrengthType = EIGS_DamageStrengthType::Light;
    this->DistanceFalloff = 100.00f;
    this->bAppliesGameplayEffect = false;
    this->GameplayEffectDuration = -1.00f;
    this->GameplayEffectToApply = NULL;
}


