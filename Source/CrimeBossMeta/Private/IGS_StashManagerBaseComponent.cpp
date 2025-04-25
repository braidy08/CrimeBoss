#include "IGS_StashManagerBaseComponent.h"
#include "Templates/SubclassOf.h"

UIGS_StashManagerBaseComponent::UIGS_StashManagerBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsManagerDataDirty = false;
    this->bIsManagerInitialized = false;
}

bool UIGS_StashManagerBaseComponent::UpgradeWeapon_Implementation(UMETA_Weapon* inWeapon, TSubclassOf<UMETA_WeaponInventoryObject> inTargetWeapon) {
    return false;
}

void UIGS_StashManagerBaseComponent::SellWeaponFromStash_Implementation(UMETA_Weapon* inWeapon) {
}

void UIGS_StashManagerBaseComponent::SellEquipmentFromStash_Implementation(UMETA_Equipment* inEquipment) {
}

void UIGS_StashManagerBaseComponent::RemoveWeaponsFromStash_Implementation(TSubclassOf<UMETA_WeaponInventoryObject> inWeaponsId, int32 inAmount, bool inBetweenHeisterAndStash, int32& outRemovedAmount) {
}

bool UIGS_StashManagerBaseComponent::IsManagerInitialized() const {
    return false;
}

TMap<FGameplayTag, int32> UIGS_StashManagerBaseComponent::GetTradeableLoot_Implementation() {
    return TMap<FGameplayTag, int32>();
}

void UIGS_StashManagerBaseComponent::GetTotalLootValue_Implementation(int32& outTotalValue, int32& outRawValue) {
}

TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponAmountInfo> UIGS_StashManagerBaseComponent::GetStashWeapons_Implementation(bool inIsLobby) {
    return TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponAmountInfo>();
}

TArray<UMETA_Equipment*> UIGS_StashManagerBaseComponent::GetStashUnequippedEquipment_Implementation() const {
    return TArray<UMETA_Equipment*>();
}

TArray<UMETA_Equipment*> UIGS_StashManagerBaseComponent::GetStashEquipment_Implementation() const {
    return TArray<UMETA_Equipment*>();
}

void UIGS_StashManagerBaseComponent::GetPriceModifierForSellingLoot_Implementation(FGameplayTag inMainLootTag, float& outModifier) {
}

void UIGS_StashManagerBaseComponent::GetLootValueByLootTag_Implementation(FGameplayTag inLootTag, int32& OutValue, int32& outRawValue) {
}

TMap<FGameplayTag, int32> UIGS_StashManagerBaseComponent::GetLoot_Implementation() {
    return TMap<FGameplayTag, int32>();
}

FMETA_CharacterID UIGS_StashManagerBaseComponent::GetBossCharacterID() {
    return FMETA_CharacterID{};
}

int32 UIGS_StashManagerBaseComponent::GetActualPriceForSellingLoot_Implementation(FGameplayTag inLootTag, int32 inAmount) {
    return 0;
}

TArray<FGameplayTag> UIGS_StashManagerBaseComponent::GetAccountPlotlineAssetsTags_Implementation() {
    return TArray<FGameplayTag>();
}

void UIGS_StashManagerBaseComponent::FilterAvailableWeapons_Implementation(const TArray<FMETA_WeaponAmountInfo>& inWeaponArray, TArray<FMETA_WeaponAmountInfo>& outWeaponArray) {
}

bool UIGS_StashManagerBaseComponent::CanWeaponBeUpgraded_Implementation(UMETA_Weapon* inWeapon) {
    return false;
}

void UIGS_StashManagerBaseComponent::AddWeaponsToStash_Implementation(TSubclassOf<UMETA_WeaponInventoryObject> inWeaponsId, int32 inAmount, bool inBetweenHeisterAndStash) {
}


