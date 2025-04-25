#include "META_RandEventRewardRuntimeData.h"

FMETA_RandEventRewardRuntimeData::FMETA_RandEventRewardRuntimeData() {
    this->RewardType = EMETA_RandEventReward::None;
    this->CashValue = 0;
    this->LootMonetaryValuer = 0;
    this->Soldiers = 0;
    this->HeisterQuality = EMETA_ItemQuality::None;
    this->HeisterLevel = 0;
    this->HeatChangeForAmountOfLvls = 0;
    this->InvestigationProgressValueChangeForPercents = 0.00f;
    this->TargetGang = EMETA_Gang::None;
    this->AmountOfTiles = 0;
    this->Duration = 0;
    this->AttitudeChangeForAmountOfLvls = 0;
}

