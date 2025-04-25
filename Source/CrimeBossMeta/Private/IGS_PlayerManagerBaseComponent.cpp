#include "IGS_PlayerManagerBaseComponent.h"

UIGS_PlayerManagerBaseComponent::UIGS_PlayerManagerBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsManagerDataDirty = false;
    this->bIsManagerInitialized = false;
}

bool UIGS_PlayerManagerBaseComponent::IsManagerInitialized() const {
    return false;
}

EMETA_RespectLvl UIGS_PlayerManagerBaseComponent::GetPlayerRespect() const {
    return EMETA_RespectLvl::Low;
}


