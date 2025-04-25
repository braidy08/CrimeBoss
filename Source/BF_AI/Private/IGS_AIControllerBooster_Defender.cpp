#include "IGS_AIControllerBooster_Defender.h"

AIGS_AIControllerBooster_Defender::AIGS_AIControllerBooster_Defender(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_SniperWeaponObject = NULL;
    this->m_PrimaryWeaponObject = NULL;
    this->m_SniperWeaponDef = NULL;
    this->m_PrimaryWeaponDef = NULL;
    this->m_SecondaryWeaponDef = NULL;
    this->m_MeleeWeaponDef = NULL;
    this->m_AntiPushThrowable = NULL;
}

void AIGS_AIControllerBooster_Defender::OnThrowableAssetLoaded(const TSoftClassPtr<UIGS_ThrowableInventoryObject> inSoft) {
}

void AIGS_AIControllerBooster_Defender::OnSniperAssetLoaded(const TSoftClassPtr<UIGS_AIPrimaryWeaponDef> inSoft) {
}


