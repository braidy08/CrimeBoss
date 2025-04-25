#include "META_RandEventReward.h"

FMETA_RandEventReward::FMETA_RandEventReward() {
    this->RewardType = EMETA_RandEventReward::None;
    this->bCanBeUnique = false;
    this->HeisterQuality = EMETA_ItemQuality::None;
    this->AllowedWeaponQualityOverride = EMETA_ItemQuality::None;
    this->AllowedEquipmentQualityOverride = EMETA_ItemQuality::None;
    this->HeatChangeForAmountOfLvls = 0;
    this->InvestigationProgressValueChangeForPercents = 0.00f;
    this->TargetGang = EMETA_Gang::None;
    this->Duration = 0;
    this->AttitudeChangeForAmountOfLvls = 0;
}

