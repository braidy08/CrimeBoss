#include "IGS_HordeModeSettings.h"

UIGS_HordeModeSettings::UIGS_HordeModeSettings() {
    this->MaxWave = 15;
    this->SwatSpawnOnWave = 11;
    this->ScudosSpawnOnWave = 6;
    this->MaxSavedMissions = 10;
}

UIGS_HordeModeSettings* UIGS_HordeModeSettings::GetDefaultHordeModeSettings() {
    return NULL;
}


