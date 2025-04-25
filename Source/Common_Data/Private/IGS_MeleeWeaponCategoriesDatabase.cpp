#include "IGS_MeleeWeaponCategoriesDatabase.h"

UIGS_MeleeWeaponCategoriesDatabase::UIGS_MeleeWeaponCategoriesDatabase() {
}

FIGS_MeleeWeaponCategoryRow UIGS_MeleeWeaponCategoriesDatabase::GetCategoryByWeaponID(const UObject* inWCO, FGameplayTag inWeaponId) {
    return FIGS_MeleeWeaponCategoryRow{};
}

FIGS_MeleeWeaponCategoryRow UIGS_MeleeWeaponCategoriesDatabase::GetCategoryByPreviewWeaponID(const UObject* inWCO, FGameplayTag inWeaponId) {
    return FIGS_MeleeWeaponCategoryRow{};
}

FIGS_MeleeWeaponCategoryRow UIGS_MeleeWeaponCategoriesDatabase::GetCategory(const UObject* inWCO, FGameplayTag inID) {
    return FIGS_MeleeWeaponCategoryRow{};
}


