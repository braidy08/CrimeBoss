#include "META_BlackmarketData.h"

UMETA_BlackmarketData::UMETA_BlackmarketData() {
    this->PriorityTolerance = 0;
    this->BasePriority = 100;
    this->KeepItemsInShopAfterPurchase = false;
    this->WeaponPriceIncreaseForSubsequentPurchases = 0.00f;
    this->EquipmentPriceIncreaseForSubsequentPurchases = 0.00f;
    this->WeaponRefreshStartPrice = 100.00f;
    this->WeaponRefreshMultiplier = 1.00f;
}

bool UMETA_BlackmarketData::GetWeaponSkinLimitInShop(const EMETA_RespectLvl inRespect, int32& outLimit) const {
    return false;
}

TArray<FString> UMETA_BlackmarketData::GetItemGroupOptions() const {
    return TArray<FString>();
}


