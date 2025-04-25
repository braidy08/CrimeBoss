#include "IGS_MenuCommonData_Base.h"

UIGS_MenuCommonData_Base::UIGS_MenuCommonData_Base() {
}

TArray<EIGS_UserDifficulty> UIGS_MenuCommonData_Base::GetSupportedDifficulties() {
    return TArray<EIGS_UserDifficulty>();
}

EIGS_ScenarioDifficulty UIGS_MenuCommonData_Base::GetRandomizedDifficulty(EMETA_RespectLvl inRespectLvl) const {
    return EIGS_ScenarioDifficulty::SD_Unknown;
}

FGameplayTag UIGS_MenuCommonData_Base::GetBossCharacterTagID() const {
    return FGameplayTag{};
}

FGameplayTagContainer UIGS_MenuCommonData_Base::GetAllowedLoot() const {
    return FGameplayTagContainer{};
}


