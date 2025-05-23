#include "IGS_CrewManagerBaseComponent.h"
#include "Templates/SubclassOf.h"

UIGS_CrewManagerBaseComponent::UIGS_CrewManagerBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsManagerDataDirty = false;
    this->bIsManagerInitialized = false;
}

bool UIGS_CrewManagerBaseComponent::SwitchWeaponsBetweenHeisters_Implementation(UMETA_Character* CharacterA, UMETA_Character* CharacterB, UMETA_Weapon* weaponObject) {
    return false;
}

bool UIGS_CrewManagerBaseComponent::ShouldShowUpkeepCost_Implementation() {
    return false;
}

bool UIGS_CrewManagerBaseComponent::SetHeisterExclusionFromCampaign(FGameplayTag inCharacterTagID, bool inExclude) {
    return false;
}

bool UIGS_CrewManagerBaseComponent::PromoteHeister_Implementation(UMETA_Character* inCharacter, bool inIgnoreCost) {
    return false;
}

bool UIGS_CrewManagerBaseComponent::MoveWeaponToItsSlotInHeistersLoadoutFromStash_Implementation(UMETA_Character* ToCharacter, TSubclassOf<UMETA_WeaponInventoryObject> inWeaponId, UMETA_Character* FromCharacter, FGameplayTag inWeaponSkinTagID) {
    return false;
}

bool UIGS_CrewManagerBaseComponent::MoveWeaponFromHeistersSlotToStash_Implementation(UMETA_Character* Character, EIGS_InventorySlot inInventorySlot) {
    return false;
}

void UIGS_CrewManagerBaseComponent::MoveHeistersLoadoutToStash_Implementation(UMETA_Character* Character) {
}

bool UIGS_CrewManagerBaseComponent::IsManagerInitialized() const {
    return false;
}

bool UIGS_CrewManagerBaseComponent::IsCharacterTaken_Implementation(UMETA_Character* inCharacter) {
    return false;
}

int32 UIGS_CrewManagerBaseComponent::GetLevelUpCost_Implementation(UMETA_Character* inCharacter) {
    return 0;
}

UMETA_Character* UIGS_CrewManagerBaseComponent::GetHeisterByID_Implementation(EIGS_CharacterID ID, int32 UniqGenericId) {
    return NULL;
}

UMETA_Character* UIGS_CrewManagerBaseComponent::GetCharacterByTag_Implementation(FGameplayTag inCharacterTag) {
    return NULL;
}

TArray<UMETA_Character*> UIGS_CrewManagerBaseComponent::GetAllHeisters_Implementation(bool inIsLobby) {
    return TArray<UMETA_Character*>();
}

void UIGS_CrewManagerBaseComponent::FireCharacter_Implementation(UMETA_Character* Character) {
}


