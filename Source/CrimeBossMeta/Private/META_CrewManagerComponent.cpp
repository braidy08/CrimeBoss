#include "META_CrewManagerComponent.h"
#include "Templates/SubclassOf.h"

UMETA_CrewManagerComponent::UMETA_CrewManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RemainAmountOfCompletedMissionsBeforeUnlock = 0;
}

void UMETA_CrewManagerComponent::SetCharacterPlotlineCompleted(FGameplayTag inCharacter) {
}

EIGS_CharacterID UMETA_CrewManagerComponent::SelectCharacterForGenerationFromPool(const TArray<EIGS_CharacterID>& inCharacterPool) const {
    return EIGS_CharacterID::Char_Unknown;
}

void UMETA_CrewManagerComponent::SaveCharacterMissionStatus(FGameplayTag inCharacter, TSubclassOf<UMETA_MissionID> inMissionID, EMETA_JobResult inResult) {
}

EMETA_ItemQuality UMETA_CrewManagerComponent::SanitizeGenericHeisterQuality(EMETA_ItemQuality inRequiredQuality) const {
    return EMETA_ItemQuality::None;
}

void UMETA_CrewManagerComponent::ResetCharacterPlotlineProgressForCharacter(FGameplayTag inCharacter) {
}

void UMETA_CrewManagerComponent::ResetActiveGenericVariants() {
}

void UMETA_CrewManagerComponent::RemoveCharacterFromCampaign(UMETA_Character* inCharacter) {
}

UMETA_Character* UMETA_CrewManagerComponent::MorphUniqueCharacter(UMETA_Character* inOriginalCharacter, const FGameplayTag inNewCharacter, const bool inForceIgnoreLock) {
    return NULL;
}

bool UMETA_CrewManagerComponent::IsHeisterRemovedFromCampaign(EIGS_CharacterID inCharacterID) const {
    return false;
}

bool UMETA_CrewManagerComponent::IsHeisterExcludedFromCampaign(FGameplayTag inCharacterID) const {
    return false;
}

bool UMETA_CrewManagerComponent::IsCharacterPlotlineCompleted(FGameplayTag inCharacterID) const {
    return false;
}

bool UMETA_CrewManagerComponent::IsCharacterMutuallyExclusiveWithActiveCharacterByTagID(FGameplayTag inCharacterID) const {
    return false;
}

bool UMETA_CrewManagerComponent::IsCharacterMutuallyExclusiveWithActiveCharacter(const FIGS_CharacterTableRow& inCharacterData, FGameplayTag inCharacterID) const {
    return false;
}

bool UMETA_CrewManagerComponent::IsCharacterFromEntitledDLC(FGameplayTag inCharacterID) const {
    return false;
}

TArray<EIGS_CharacterID> UMETA_CrewManagerComponent::GetUniqueCharactersAvailableForGeneration() const {
    return TArray<EIGS_CharacterID>();
}

TArray<UMETA_Character*> UMETA_CrewManagerComponent::GetEntitledCharactersToBeAddedForTheFirstTime() {
    return TArray<UMETA_Character*>();
}

void UMETA_CrewManagerComponent::GetCharacterMissionProgressForCharacter(FGameplayTag inCharacter, bool& outFound, FIGS_CharacterMissionProgress& outMissionProgress) const {
}

UMETA_Character* UMETA_CrewManagerComponent::CreateUniqueCharacterByTagID(FGameplayTag inCharacterTagID, bool inIsTemporary, bool inForceIgnoreLock) {
    return NULL;
}

UMETA_Character* UMETA_CrewManagerComponent::CreateUniqueCharacterByID(EIGS_CharacterID inCharacterID, bool inIsTemporary, bool inForceIgnoreLock) {
    return NULL;
}

UMETA_Character* UMETA_CrewManagerComponent::CreateGenericCharacterByPlayerRespect(EMETA_RespectLvl inRespect, const TArray<UMETA_Character*>& inCurrentlyGeneratedCharacters, const TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>>& inForbiddenPerks, const TArray<EIGS_CharacterID>& inForbiddenCharacterIDs, EMETA_ItemQuality inWeaponQualityOverride, EMETA_ItemQuality inEquipmentQualityOverride) {
    return NULL;
}

UMETA_Character* UMETA_CrewManagerComponent::CreateGenericCharacterByID(EIGS_CharacterID inCharacterID, EMETA_ItemQuality inHeisterQuality, const int32 inUniqueGenericID, const TArray<UMETA_Character*>& inCurrentlyGeneratedCharacters, const TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>>& inForbiddenPerks, EMETA_ItemQuality inWeaponQualityOverride, EMETA_ItemQuality inEquipmentQualityOverride) {
    return NULL;
}

UMETA_Character* UMETA_CrewManagerComponent::CreateGenericCharacter(EMETA_ItemQuality inHeisterQuality, const TArray<UMETA_Character*>& inCurrentlyGeneratedCharacters, const TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>>& inForbiddenPerks, const TArray<EIGS_CharacterID>& inForbiddenCharacterIDs, EMETA_ItemQuality inWeaponQualityOverride, EMETA_ItemQuality inEquipmentQualityOverride) {
    return NULL;
}

FMETA_HeisterLoadout UMETA_CrewManagerComponent::CreateBossLoadout() {
    return FMETA_HeisterLoadout{};
}

bool UMETA_CrewManagerComponent::CanUniqueCharacterBeGenerated(FGameplayTag inCharacterID, const AMETA_BaseGameMode* inMetaGameMode, const TArray<UMETA_Character*>& inBlackmarketCharactersPool) const {
    return false;
}

TArray<UMETA_Character*> UMETA_CrewManagerComponent::CalculateStartingHeistersBonus() {
    return TArray<UMETA_Character*>();
}


