#include "IGS_AIControllerBooster_Base.h"
#include "IGS_AIBoosterSettingsComponent.h"
#include "IGS_AIThreatComponent.h"
#include "IGS_AggroHandlerComponent.h"

AIGS_AIControllerBooster_Base::AIGS_AIControllerBooster_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AggroHandlerComponent = CreateDefaultSubobject<UIGS_AggroHandlerComponent>(TEXT("AggroHandlerComponent"));
    this->ThreatComponent = CreateDefaultSubobject<UIGS_AIThreatComponent>(TEXT("ThreatComponent"));
    this->SettingsComponent = CreateDefaultSubobject<UIGS_AIBoosterSettingsComponent>(TEXT("SettingsComponent"));
    this->BoostStartAkEvent = NULL;
    this->BoostEndAkEvent = NULL;
    this->BoostedVisualEffect = NULL;
    this->BoostWaveVisualEffect = NULL;
    this->bDataFromDatabase = true;
    this->m_GameplayEffect = NULL;
}

void AIGS_AIControllerBooster_Base::UnlockBoosting(const UObject* inWCO) {
}

void AIGS_AIControllerBooster_Base::LockBoosting(const UObject* inWCO) {
}

void AIGS_AIControllerBooster_Base::HandleWaveBoost(const int32 inWavesRemaining) {
}

void AIGS_AIControllerBooster_Base::CreateCustomBoost(const FVector InLocation, const bool inParticles, const bool InAnimation, const bool inAudio) {
}

void AIGS_AIControllerBooster_Base::Cleanup() {
}


