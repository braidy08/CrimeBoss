#include "META_MissionAdditionalMonetaryValue.h"

FMETA_MissionAdditionalMonetaryValue::FMETA_MissionAdditionalMonetaryValue() {
    this->RewardMultiplierFor1stStar = 0.00f;
    this->RewardMultiplierFor2ndStar = 0.00f;
    this->RewardMultiplierFor3rdStar = 0.00f;
    this->ObjectiveValueConvertedToMoneyInPercent = 0;
    this->bUseObjectiveValueOverride = false;
    this->ObjectiveMonetaryValueInPercentOverride = 0.00f;
    this->LootFromSuccess = 0;
    this->MaxMonetaryValueMultiplier = 0.00f;
}

