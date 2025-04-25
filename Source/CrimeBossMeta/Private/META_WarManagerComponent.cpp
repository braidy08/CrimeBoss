#include "META_WarManagerComponent.h"

UMETA_WarManagerComponent::UMETA_WarManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NeutralDaysThresholdFromAttack = 10;
    this->UnfriendlyDaysThresholdFromAttack = 3;
    this->TodayAttemptsToAttackTurf = 0;
    this->CountOfDaysForMoreAttack = 0;
    this->CurrentLastTileConfigIndex = 0;
}

void UMETA_WarManagerComponent::SyncArmyTierChangingConditionsWithInitial(TArray<FMETA_ConditionForArmyTierChanging>& inInitialConditions) {
}

void UMETA_WarManagerComponent::SetSpecialArmyTierDurationForGang(EMETA_Gang inGang, int32 inNewDuration) {
}

void UMETA_WarManagerComponent::SetGangStrategy(EMETA_Gang inGang, EMETA_GangStrategy inStrategy) {
}

void UMETA_WarManagerComponent::SetGangModifierDuration(EMETA_Gang inGang, FGameplayTag inModifier, int32 inDuration) {
}

void UMETA_WarManagerComponent::SetGangInfo(EMETA_Gang inGang, const FMETA_GangInfo& inGangInfo) {
}

void UMETA_WarManagerComponent::SetGangArmyTier(const EMETA_Gang inGang, const EMETA_ArmyTier inArmyTier, const int32 inSpecialTierDuration) {
}

void UMETA_WarManagerComponent::SetChanceToAttackAnyAdjacentTerritory(EMETA_Gang inGang, float inNewValue) {
}

void UMETA_WarManagerComponent::SetCashForGang(EMETA_Gang inGang, int32 inCash) {
}

void UMETA_WarManagerComponent::SetBaseAIBossStrength(EMETA_Gang inGang, int32 inNewValue, bool bIsClamped) {
}

void UMETA_WarManagerComponent::SetAIBossStrengthChangeFromTerritory(EMETA_Gang inGang, int32 inNewValue) {
}

void UMETA_WarManagerComponent::ResolveConflictingGangAttitudes(EMETA_GangAttitudeList inAttitudeList, EMETA_Gang inOwnerGang, EMETA_Gang inTargetGang) {
}

void UMETA_WarManagerComponent::RemoveGangFromAttitudeList(EMETA_GangAttitudeList inAttitudeList, EMETA_Gang inOwnerGang, EMETA_Gang inTargetGang) {
}

void UMETA_WarManagerComponent::RemoveFromLostTiles(EMETA_Gang inGang, FGameplayTag inTileID) {
}

void UMETA_WarManagerComponent::RemoveAIBossStrengthEffectByIndex(EMETA_Gang inGang, int32 inIndex) {
}

void UMETA_WarManagerComponent::RecomputeAIBossStrengthOnPlayerAttackOrDefense(EMETA_Gang inGang) {
}

void UMETA_WarManagerComponent::RecomputeAIBossStrengthOnNewDay(EMETA_Gang inGang) {
}

bool UMETA_WarManagerComponent::IsThereGangInAttitudeList(const EMETA_GangAttitudeList inAttitudeList, const EMETA_Gang inOwnerGang, const EMETA_Gang inTargetGang) {
    return false;
}


bool UMETA_WarManagerComponent::IsArmyTierChangingConditionAlreadyCompleted(EMETA_Gang inGang, const FMETA_ConditionForArmyTierChanging& inCompletedCondition) const {
    return false;
}

FMETA_TurfHistory UMETA_WarManagerComponent::GetTurfHistoryOfDay(int32 inDay) const {
    return FMETA_TurfHistory{};
}

FMETA_TurfHistory UMETA_WarManagerComponent::GetTurfHistoryOfAmountOfPreviousDays(int32 inCurrentDay, int32 inConsideringDaysAmount, bool inIncludeCurrentDay) {
    return FMETA_TurfHistory{};
}

EMETA_BossGangRelationship UMETA_WarManagerComponent::GetRelationshipToBossInDays(EMETA_Gang BossGang, EMETA_Gang Gang, int32 CurrentDay) {
    return EMETA_BossGangRelationship::Neutral;
}

TMap<FGameplayTag, int32> UMETA_WarManagerComponent::GetLostTiles(EMETA_Gang inGang) {
    return TMap<FGameplayTag, int32>();
}

EMETA_GangStrategy UMETA_WarManagerComponent::GetGangStrategy(EMETA_Gang inGang) const {
    return EMETA_GangStrategy::Normal;
}

int32 UMETA_WarManagerComponent::GetGangModifierDuration(EMETA_Gang inGang, FGameplayTag inModifier, bool& outSuccess) const {
    return 0;
}

FMETA_GangInfo UMETA_WarManagerComponent::GetGangInfo(EMETA_Gang inGang, bool& outSuccess) {
    return FMETA_GangInfo{};
}

bool UMETA_WarManagerComponent::GetGangAttitudeList(const EMETA_GangAttitudeList inAttitudeList, const EMETA_Gang inOwnerGang, TMap<EMETA_Gang, int32>& outAttitudeList) {
    return false;
}

bool UMETA_WarManagerComponent::GetGangAttitudeDuration(EMETA_GangAttitudeList inAttitudeList, EMETA_Gang inOwnerGang, const EMETA_Gang inTargetGang, int32& outDays) {
    return false;
}

EMETA_ArmyTier UMETA_WarManagerComponent::GetGangArmyTier_Implementation(EMETA_Gang inGang) const {
    return EMETA_ArmyTier::Low;
}

float UMETA_WarManagerComponent::GetChanceToAttackAnyAdjacentTerritory(EMETA_Gang inGang) const {
    return 0.0f;
}

int32 UMETA_WarManagerComponent::GetBaseAIBossStrength(EMETA_Gang inGang) const {
    return 0;
}

TArray<FMETA_EffectOnAIBossStrength> UMETA_WarManagerComponent::GetAIBossStrengthEffects(EMETA_Gang inGang) {
    return TArray<FMETA_EffectOnAIBossStrength>();
}

int32 UMETA_WarManagerComponent::GetAIBossStrengthChangeFromTerritory(EMETA_Gang inGang) const {
    return 0;
}

bool UMETA_WarManagerComponent::DoesGangHaveSpecialArmyTier(const EMETA_Gang inGang) const {
    return false;
}

void UMETA_WarManagerComponent::DecrementLostTilesDurationForLostTiles() {
}

void UMETA_WarManagerComponent::DecrementDurationInsideEachGangAttitudeList() {
}

bool UMETA_WarManagerComponent::CheckMutualGangRelationship(const EMETA_GangAttitudeList inRelation, const EMETA_Gang inFirstGang, const EMETA_Gang inSecondGang, int32& OutDuration) {
    return false;
}

void UMETA_WarManagerComponent::ChangeGangExistingDurationInAttitudeList(const EMETA_GangAttitudeList inAttitudeList, const EMETA_Gang inOwnerGang, const EMETA_Gang inTargetGang, const int32 inByValue) {
}

void UMETA_WarManagerComponent::ChangeGangDurationInAttitudeList(const EMETA_GangAttitudeList inAttitudeList, const EMETA_Gang inOwnerGang, const EMETA_Gang inTargetGang, const int32 inByValue, const int32 inLimit) {
}

void UMETA_WarManagerComponent::ChangeChanceToAttackAnyAdjacentTerritory(EMETA_Gang inGang, float inChangeValue) {
}

void UMETA_WarManagerComponent::ChangeCashForGang(EMETA_Gang inGang, int32 inByValue) {
}

void UMETA_WarManagerComponent::ChangeBaseAIBossStrength(EMETA_Gang inGang, int32 inChangeValue, bool bIsClamped) {
}

void UMETA_WarManagerComponent::ChangeAIBossStrengthChangeFromTerritory(EMETA_Gang inGang, int32 inChangeValue) {
}

void UMETA_WarManagerComponent::AddTurfChangeToHistory(int32 inDay, EMETA_Gang inPreviousTurfOwner, EMETA_Gang inNewOwner) {
}

void UMETA_WarManagerComponent::AddToLostTiles(EMETA_Gang inGang, FGameplayTag inTileID, int32 inDuration) {
}

void UMETA_WarManagerComponent::AddGangToAttitudeList(EMETA_GangAttitudeList inAttitudeList, EMETA_Gang inOwnerGang, EMETA_Gang inTargetGang, int32 inDuration) {
}

void UMETA_WarManagerComponent::AddArmyTierChangingConditionAsCompleted(EMETA_Gang inGang, FMETA_ConditionForArmyTierChanging& inCompletedCondition) {
}

void UMETA_WarManagerComponent::AddAIBossStrengthEffect(EMETA_Gang inGang, FMETA_EffectOnAIBossStrength inNewEffect) {
}


