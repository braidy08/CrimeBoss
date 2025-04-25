#include "IGS_CombatSettingsManager.h"

UIGS_CombatSettingsManager::UIGS_CombatSettingsManager() {
    this->CombatSettings = NULL;
}

FIGS_PushForTargetSettingsDef UIGS_CombatSettingsManager::GetPushForTargetSettingsDef() const {
    return FIGS_PushForTargetSettingsDef{};
}

FIGS_MeleeSettingsDef UIGS_CombatSettingsManager::GetMeleeSettingsDef() const {
    return FIGS_MeleeSettingsDef{};
}


