#include "META_PlayerManagerComponent.h"

UMETA_PlayerManagerComponent::UMETA_PlayerManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UMETA_PlayerManagerComponent::UpdateArmyAfterMission(const int32 inSentSoldiers, const int32 inSoldierCasualties) {
}

void UMETA_PlayerManagerComponent::SetPlayerArmyTier(const EMETA_ArmyTier inNewTier) {
}

bool UMETA_PlayerManagerComponent::RequestRespectChangeSequence() {
    return false;
}

void UMETA_PlayerManagerComponent::RefreshPlayerAvailableArmy() {
}

bool UMETA_PlayerManagerComponent::IsRespectPending(const EMETA_RespectLvl inRespect) const {
    return false;
}

void UMETA_PlayerManagerComponent::GetRespectInfo(EMETA_RespectLvl& outCurrentRespect, int32& outCurrentTurfs, int32& outMaximumTurfsNeeded, TMap<EMETA_RespectLvl, int32>& outSortedThresholds) {
}

EMETA_RespectLvl UMETA_PlayerManagerComponent::GetPlayerRespectFromTurfCount() const {
    return EMETA_RespectLvl::Low;
}

FMETA_PlayerInfo UMETA_PlayerManagerComponent::GetPlayerInfo() const {
    return FMETA_PlayerInfo{};
}

EMETA_ArmyTier UMETA_PlayerManagerComponent::GetPlayerArmyTier() const {
    return EMETA_ArmyTier::Low;
}

void UMETA_PlayerManagerComponent::GetPlayerArmyAmount(int32& outAvailableSoldiers, int32& outTotalSoldiers) const {
}

TArray<EMETA_RespectLvl> UMETA_PlayerManagerComponent::GetPendingRespectChangesArray() const {
    return TArray<EMETA_RespectLvl>();
}

int32 UMETA_PlayerManagerComponent::GetMaximumPlayerArmyAmount() const {
    return 0;
}

FMETA_Interval UMETA_PlayerManagerComponent::GetInitialPlayerTurfCount_Implementation() {
    return FMETA_Interval{};
}

int32 UMETA_PlayerManagerComponent::GetInitialPlayerArmyAmount() const {
    return 0;
}

int32 UMETA_PlayerManagerComponent::GetBossTurfCount() const {
    return 0;
}

EMETA_Gang UMETA_PlayerManagerComponent::GetBossGang() {
    return EMETA_Gang::None;
}

FMETA_CharacterID UMETA_PlayerManagerComponent::GetBossCharacterID() const {
    return FMETA_CharacterID{};
}

void UMETA_PlayerManagerComponent::ForceRequestRespectChangeSequence(const EMETA_RespectLvl inFinalRespect, const float inFinalBossPoints) {
}

void UMETA_PlayerManagerComponent::ConsumePendingRespectChange() {
}

bool UMETA_PlayerManagerComponent::CheckPendingRespectChanges(EMETA_RespectLvl& outNextRespect, EMETA_RespectLvl& outFinalRespect, float& outRawBossPoints) const {
    return false;
}

void UMETA_PlayerManagerComponent::ChangePlayerAvailableArmy(const int32 inSoldiers) {
}

void UMETA_PlayerManagerComponent::ChangePlayerArmy(const int32 inSoldiers) {
}

bool UMETA_PlayerManagerComponent::AreTherePendingRespectChanges() const {
    return false;
}

void UMETA_PlayerManagerComponent::AddPendingRespectChange(const EMETA_RespectLvl inRespect) {
}


