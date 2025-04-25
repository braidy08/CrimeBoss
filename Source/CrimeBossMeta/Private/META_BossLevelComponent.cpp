#include "META_BossLevelComponent.h"

UMETA_BossLevelComponent::UMETA_BossLevelComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BossLevelData = NULL;
    this->AmountOfPrimaryWeaponsIssued = 0;
    this->AmountOfAdditionalEquipmentIssued = 0;
    this->LocalBossPointAfterAsset = 0.00f;
    this->PreviousLevel = 0;
    this->PreviousPoints = 0.00f;
}

bool UMETA_BossLevelComponent::SetBossLevel_Implementation(const int32 inNewBossLevel, const float inLeftoverPoints) {
    return false;
}

bool UMETA_BossLevelComponent::IsMaxBossLevel() {
    return false;
}

void UMETA_BossLevelComponent::GetLevelFromAddedBossPoints(const float inBossPoints, int32& outNewLevel, float& outLeftoverPoints, float& outTotalPointsToNextLevel) {
}

float UMETA_BossLevelComponent::GetCampaignProgressReductionMultiplier_Implementation() {
    return 0.0f;
}

float UMETA_BossLevelComponent::GetBossPointMultiplier() {
    return 0.0f;
}

float UMETA_BossLevelComponent::CalculateBossPointsWithMultipliers(const float inBossPoints) {
    return 0.0f;
}

float UMETA_BossLevelComponent::CalculateBossPointsFromScore(const int32 inBaseScore) {
    return 0.0f;
}

float UMETA_BossLevelComponent::CalculateBossPointsFromRespect(const EMETA_RespectLvl inOriginalRespect, const EMETA_RespectLvl inNewRespect) {
    return 0.0f;
}

TArray<FMETA_PerkData> UMETA_BossLevelComponent::CalculateBossPerksByBossLevel(EIGS_CharacterID inBossID, FGameplayTag inBossTagID, int32 inBossLevel, TArray<FMETA_PerkData>& inCurrentPerks) {
    return TArray<FMETA_PerkData>();
}

bool UMETA_BossLevelComponent::BuyItem_Implementation(FGameplayTag ItemTag, FGameplayTag screenTag, FGameplayTag SkinTag) {
    return false;
}

void UMETA_BossLevelComponent::AddBossPoints(const float inChangeBy, const bool inWithMultipliers) {
}


