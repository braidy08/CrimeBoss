#include "IGS_PerksUtilities.h"

UIGS_PerksUtilities::UIGS_PerksUtilities() {
}

void UIGS_PerksUtilities::RemovePerksGroupFromNewPending(UObject* inWCO, const FGameplayTag inPerkTag) {
}

int32 UIGS_PerksUtilities::GetUnlockedPerkGroupsCount(UObject* inWCO) {
    return 0;
}

int32 UIGS_PerksUtilities::GetUnlockablePerkGroupsCount(UObject* inWCO) {
    return 0;
}

TArray<UMETA_Perk*> UIGS_PerksUtilities::GetPerksOnFirstLevel(UObject* inWCO) {
    return TArray<UMETA_Perk*>();
}

FIGS_PerkGroup UIGS_PerksUtilities::GetPerkGroupByPerkTag(const FGameplayTag inTag, TArray<FIGS_PerkGroup>& inPerkGroups) {
    return FIGS_PerkGroup{};
}

TArray<FIGS_PerkGroup> UIGS_PerksUtilities::GetAllPerksGroups(UObject* inWCO) {
    return TArray<FIGS_PerkGroup>();
}

UMETA_Perk* UIGS_PerksUtilities::CreatePerkObject(UObject* inWCO, FIGS_PerksTableRow inPerkRow) {
    return NULL;
}


