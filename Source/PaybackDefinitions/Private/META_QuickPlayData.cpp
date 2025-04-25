#include "META_QuickPlayData.h"

UMETA_QuickPlayData::UMETA_QuickPlayData() {
    this->LobbyLonelyWaitingTime = 180;
    this->LobbyNewClientJoinedWaitingTime = 120;
    this->LobbyFinalWaitingTime = 10;
    this->MoneyToPointsMultiplier = 1.00f;
    this->OneStarsPointsGainPercentage = 50.00f;
    this->TwoStarsPointsGainPercentage = 100.00f;
    this->ThreeStarsPointsGainPercentage = 125.00f;
    this->SubstractPointsPercentageWhenMissionFailed = 5.00f;
    this->SubstractPointsPercentageWhenMissionFailedPerDeadHeister = 5.00f;
    this->SubstractPointsPercentageWhenMissionFailedPerDeadCivilian = 0.50f;
    this->QuickplayScoreMultiplier = 1.00f;
    this->ScoreFor1Star = 50000;
    this->ScoreFor2Stars = 100000;
    this->ScoreFor3Stars = 200000;
    this->ChainMinusScorePerKilledCivilian = 5000;
    this->ChainMinusScorePerReviveUsed = 10000;
    this->ChainMinusScorePerKilledHeister = 20000;
    this->TutorialCharacters.AddDefaulted(4);
}

bool UMETA_QuickPlayData::ShouldDisplayDifficultyWarning(const EIGS_UserDifficulty& inDifficulty, const int32& inLevel) const {
    return false;
}

void UMETA_QuickPlayData::GetSpecialTierChance(const EIGS_UserDifficulty inUserDifficulty, const int32 inStormIntensity, bool& outHasOverride, float& outRatio) {
}


