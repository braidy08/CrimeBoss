#include "IGS_Quickplay_CrewManagerComponent.h"

UIGS_Quickplay_CrewManagerComponent::UIGS_Quickplay_CrewManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SelectedBossCharacterIndex = 0;
}

void UIGS_Quickplay_CrewManagerComponent::SetBossPerk(UMETA_BossCharacter* inBossCharacter, int32 inSlot, FGameplayTag inPerk) {
}

void UIGS_Quickplay_CrewManagerComponent::SetBossItem(UMETA_BossCharacter* inBossCharacter, FGameplayTag inItemTag, bool inNotify) {
}

void UIGS_Quickplay_CrewManagerComponent::SelectBossCharacterByTag(FGameplayTag inBossID) {
}

void UIGS_Quickplay_CrewManagerComponent::SelectBossCharacter(int32 inIndex) {
}

void UIGS_Quickplay_CrewManagerComponent::RemoveCharacter(FGameplayTag inCharacterTag) {
}

void UIGS_Quickplay_CrewManagerComponent::RemoveBossItem(UMETA_BossCharacter* inBossCharacter, FGameplayTag inItemTag) {
}

bool UIGS_Quickplay_CrewManagerComponent::IsCharacterOwned(FGameplayTag inCharacterTag) {
    return false;
}

void UIGS_Quickplay_CrewManagerComponent::InitializeFreeBossSlots() {
}

void UIGS_Quickplay_CrewManagerComponent::InitializeExistingBossCharacters() {
}

bool UIGS_Quickplay_CrewManagerComponent::HasMaxBossSlotsCount() const {
    return false;
}

bool UIGS_Quickplay_CrewManagerComponent::HasBossItemEquipped(const UMETA_BossCharacter* inBossCharacter, FGameplayTag inItemTag) const {
    return false;
}

UMETA_BossCharacter* UIGS_Quickplay_CrewManagerComponent::GetSelectedBossCharacter() const {
    return NULL;
}

int32 UIGS_Quickplay_CrewManagerComponent::GetOwnedBossSlotsCount() const {
    return 0;
}

int32 UIGS_Quickplay_CrewManagerComponent::GetNextBossSlotIndex() const {
    return 0;
}

int32 UIGS_Quickplay_CrewManagerComponent::GetMaxBossSlotsCount() const {
    return 0;
}

TArray<UMETA_Character*> UIGS_Quickplay_CrewManagerComponent::GetCharactersAndBosses() {
    return TArray<UMETA_Character*>();
}

TArray<UMETA_Character*> UIGS_Quickplay_CrewManagerComponent::GetCharacters() {
    return TArray<UMETA_Character*>();
}

UMETA_Character* UIGS_Quickplay_CrewManagerComponent::GetCharacter(FGameplayTag inCharacterTag) {
    return NULL;
}

TArray<UMETA_BossCharacter*> UIGS_Quickplay_CrewManagerComponent::GetBossCharacters() {
    return TArray<UMETA_BossCharacter*>();
}

UMETA_BossCharacter* UIGS_Quickplay_CrewManagerComponent::CreateNewBossCharacter(int32 inNumber) {
    return NULL;
}

UMETA_Character* UIGS_Quickplay_CrewManagerComponent::CreateCharacter(FGameplayTag inCharacterTag) {
    return NULL;
}

void UIGS_Quickplay_CrewManagerComponent::ChooseBossRandomLoadout(UMETA_BossCharacter* inBossCharacter) {
}

void UIGS_Quickplay_CrewManagerComponent::AddNewBossCharacter(UMETA_BossCharacter* inBossCharacter) {
}

void UIGS_Quickplay_CrewManagerComponent::AddCharacters(FGameplayTagContainer inCharacterTags) {
}

void UIGS_Quickplay_CrewManagerComponent::AddCharacter(FGameplayTag inCharacterTag) {
}

void UIGS_Quickplay_CrewManagerComponent::AddBossCharacters(TArray<UMETA_BossCharacter*> inBossCharacters) {
}


