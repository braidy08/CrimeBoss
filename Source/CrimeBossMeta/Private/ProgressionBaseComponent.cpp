#include "ProgressionBaseComponent.h"

UProgressionBaseComponent::UProgressionBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_SaveGameAccount = NULL;
    this->m_SaveManager = NULL;
    this->m_ProgressionManager = NULL;
    this->m_UnlockManager = NULL;
}

void UProgressionBaseComponent::UnlockItem(const FIGS_UnlockItemInfo& inUnlockItemInfo) {
}

bool UProgressionBaseComponent::TryUnlockItemByRequiredTagValue(FGameplayTag inUnlockTag, float InValue) {
    return false;
}

bool UProgressionBaseComponent::TryGetPendingUnlockedRewards(TArray<FIGS_UnlockItemInfo>& outUnlockedItems) {
    return false;
}

void UProgressionBaseComponent::SetPendingPoints(float inPoints) {
}

void UProgressionBaseComponent::SaveSelectedUnlockedRewardsHistory(const FGameplayTag& selectedReward) {
}

void UProgressionBaseComponent::SavePendingUnlockRewards(TArray<FIGS_UnlockItemInfo>& intUnlockedItems) {
}

void UProgressionBaseComponent::SavePendingLevelUps(const int32 inLevelUps) {
}

bool UProgressionBaseComponent::SaveLastClaimedDailyMultiplayerDateTime(FDateTime InDateTime) {
    return false;
}

void UProgressionBaseComponent::ResetAccumulatedProgressionResult() {
}

bool UProgressionBaseComponent::ProcessNextPendingLevelUp(TArray<FIGS_UnlockItemInfo>& outUnlockedItems) {
    return false;
}

void UProgressionBaseComponent::ProcessMissionResults(FIGS_MissionResult& inMissionResult, TArray<FIGS_MissionResultRewardItem>& outRewardItems, bool inAccumulateResult) {
}

bool UProgressionBaseComponent::HasSomePendingUnlockRewards() const {
    return false;
}

bool UProgressionBaseComponent::HasSomePendingLevels() const {
    return false;
}

TArray<FIGS_PendingUnlockItemInfo> UProgressionBaseComponent::GetPendingUnlockRewards() const {
    return TArray<FIGS_PendingUnlockItemInfo>();
}

float UProgressionBaseComponent::GetPendingPoints() const {
    return 0.0f;
}

int32 UProgressionBaseComponent::GetPendingLevelsCount() const {
    return 0;
}

FDateTime UProgressionBaseComponent::GetLastClaimedDailyMultiplayerDateTime() const {
    return FDateTime{};
}

float UProgressionBaseComponent::GetDailyXPBonus(int32 inLevel) const {
    return 0.0f;
}

float UProgressionBaseComponent::GetDailyCashBonus(int32 inLevel) const {
    return 0.0f;
}

void UProgressionBaseComponent::ClearPendingUnlockedRewards() {
}

bool UProgressionBaseComponent::CanRewardBeClaimed(FDateTime InDateTime) const {
    return false;
}

void UProgressionBaseComponent::CalculateMultiplayerMoneyRewardMultiplier(const UIGS_Quickplay_EconomyData* inEconomyData, float inCurrentCampaignScore, float inPendingRewardMultiplier, float& outClaimableRewardMultiplier, float& outAccumulatedRewardMultiplier) const {
}

int32 UProgressionBaseComponent::CalculateMultiplayerMoneyReward(const UIGS_Quickplay_EconomyData* inEconomyData, float inPendingMultiplier) const {
    return 0;
}

int32 UProgressionBaseComponent::CalculateCurrentMultiplayerMoneyReward(const UIGS_Quickplay_EconomyData* inEconomyData) const {
    return 0;
}



void UProgressionBaseComponent::AddPendingUnlockReward(const FIGS_UnlockItemInfo& inUnlockItemInfo) {
}

void UProgressionBaseComponent::AddPendingPoints(float inPoints) {
}


