#include "META_LootNotification.h"

UMETA_LootNotification::UMETA_LootNotification() {
    this->LootValue = 0;
    this->LootPurpose = EMETA_LootPurpose::Received;
}

void UMETA_LootNotification::SetLootInfo(const FText& inLootCategory, const EMETA_LootPurpose inLootPurpose, const int32 inLootValue) {
}

int32 UMETA_LootNotification::GetLootValue() const {
    return 0;
}

EMETA_LootPurpose UMETA_LootNotification::GetLootPurpose() const {
    return EMETA_LootPurpose::Received;
}

FText UMETA_LootNotification::GetLootCategory() const {
    return FText::GetEmpty();
}


