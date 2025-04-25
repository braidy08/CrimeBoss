#include "META_StashManagerComponent.h"
#include "Templates/SubclassOf.h"

UMETA_StashManagerComponent::UMETA_StashManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentLootValueWasSoldToPawnShop = 0;
    this->LastDayWhenWarehouseAttackStarted = 0;
    this->ChanceWarehouseAttack = 0;
    this->WarehouseAttackMissionID = NULL;
    this->MoneyWarehouseAttackWasRemoved = 0;
}

bool UMETA_StashManagerComponent::TryGetValidParentLootTag(FGameplayTag inLootTag, FGameplayTag& outMetaTag) {
    return false;
}

bool UMETA_StashManagerComponent::RemoveEquipmentFromStashByObject(UMETA_Equipment* inEquipment) {
    return false;
}


void UMETA_StashManagerComponent::GetWarehouseAttackLosses(int32& outRemovedMoney, TMap<FGameplayTag, int32>& outRemovedLoot) const {
}

TMap<FGameplayTag, int32> UMETA_StashManagerComponent::GetSortedLoot(bool inAscSort) {
    return TMap<FGameplayTag, int32>();
}

FGameplayTagContainer UMETA_StashManagerComponent::GetOwnedItems(TArray<UMETA_Weapon*>& outWeapons, TArray<UMETA_Equipment*>& outEquipment) {
    return FGameplayTagContainer{};
}

FGameplayTagContainer UMETA_StashManagerComponent::GetEquippedItems(TArray<UMETA_Weapon*>& outWeapons, TArray<UMETA_Equipment*>& outEquipment) {
    return FGameplayTagContainer{};
}

void UMETA_StashManagerComponent::ChangeLootByValue(const FGameplayTag inLootTag, const int32 InValue, const bool inRawValue) {
}

void UMETA_StashManagerComponent::AddEquipmentToStashByObject(UMETA_Equipment* inEquipment) {
}

UMETA_Equipment* UMETA_StashManagerComponent::AddEquipmentToStashByID(TSubclassOf<UIGS_EquipmentInventoryObject> inEquipmentId) {
    return NULL;
}


