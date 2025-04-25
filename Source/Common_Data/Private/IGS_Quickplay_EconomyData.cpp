#include "IGS_Quickplay_EconomyData.h"
#include "Templates/SubclassOf.h"

UIGS_Quickplay_EconomyData::UIGS_Quickplay_EconomyData() {
    this->StartingCash = 10000;
    this->ProgressResetCompensationMoney = 100000;
    this->StoryChainCompletionBonus = 0.00f;
    this->StoryChainPerfectionBonus = 0.00f;
    this->BaseItemCost = 10000;
    this->DigitsWithoutRounding = 3;
    this->BaseBossSlotCost = 10000;
    this->BossSlotCategoryMultiplier = 1.00f;
    this->FreeBossSlotsCount = 1;
}

int32 UIGS_Quickplay_EconomyData::GetStartingCash() const {
    return 0;
}

float UIGS_Quickplay_EconomyData::GetRewardMultiplierForChainContract(TSubclassOf<UIGS_ChainContractID> inChainContractID) const {
    return 0.0f;
}

float UIGS_Quickplay_EconomyData::GetRewardBonusPercentageForHumanPlayers(const int32 inAdditionalHumanPlayers) const {
    return 0.0f;
}

float UIGS_Quickplay_EconomyData::GetRewardBonusPercentageForDifficulty(const EIGS_UserDifficulty inDifficulty) const {
    return 0.0f;
}

int32 UIGS_Quickplay_EconomyData::GetPaidBossSlotsCount() const {
    return 0;
}

FIGS_MultiplayerMoneyRewardSettings UIGS_Quickplay_EconomyData::GetMultiplayerMoneyRewardSettings() const {
    return FIGS_MultiplayerMoneyRewardSettings{};
}

int32 UIGS_Quickplay_EconomyData::GetMaxBossSlotsCount() const {
    return 0;
}

int32 UIGS_Quickplay_EconomyData::GetFreeBossSlotsCount() const {
    return 0;
}

int32 UIGS_Quickplay_EconomyData::GetCharacterLevelPerQuality(EMETA_ItemQuality inQuality) {
    return 0;
}

bool UIGS_Quickplay_EconomyData::GetChainCompletionBonusMultiplier(const EIGS_ChainType inChainType, const EIGS_ChainDifficulty inDifficulty, const int32 inLowestStarRating, float& outCompletionMultiplier, float& outPerfectionMultiplier) const {
    return false;
}

float UIGS_Quickplay_EconomyData::GetBossSlotPrice(int32 inSlotIndex) const {
    return 0.0f;
}

int32 UIGS_Quickplay_EconomyData::CalculateItemCostFromCategoryAndQuality(const EIGS_UnlockCategory inItemCategory, const EMETA_ItemQuality inItemQuality, const float inRelativePrice) const {
    return 0;
}


