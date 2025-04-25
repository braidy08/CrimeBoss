#include "IGS_UnlockItemInfo.h"

FIGS_UnlockItemInfo::FIGS_UnlockItemInfo() {
    this->UnlockCategory = EIGS_UnlockCategory::UC_Weapons;
    this->Quality = EMETA_ItemQuality::None;
    this->RequiredValue = 0.00f;
    this->ShowIfNotOwned = false;
    this->IsUnlockable = false;
    this->ExtraValue = 0.00f;
}

