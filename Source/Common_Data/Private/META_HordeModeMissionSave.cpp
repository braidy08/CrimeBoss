#include "META_HordeModeMissionSave.h"

FMETA_HordeModeMissionSave::FMETA_HordeModeMissionSave() {
    this->KillsCount = 0;
    this->CompletedWave = 0;
    this->MaxWaveCount = 0;
    this->Money = 0;
    this->HeisterMoney = 0;
    this->PlayersCount = 0;
    this->UserDifficulty = EIGS_UserDifficulty::UD_Unknown;
}

