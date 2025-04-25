#include "IGS_EventItems.h"

UIGS_EventItems::UIGS_EventItems() {
}

bool UIGS_EventItems::IsEventItemVisibleByID(UObject* inWCO, const FGameplayTag inItemID) {
    return false;
}

bool UIGS_EventItems::IsEventItemVisible(const UObject* inWCO, const FIGS_EventItemTableRow& inEventItem) {
    return false;
}

bool UIGS_EventItems::IsEventItemActiveByID(UObject* inWCO, const FGameplayTag inItemID) {
    return false;
}

bool UIGS_EventItems::IsEventItemActive(const UObject* inWCO, const FIGS_EventItemTableRow& inEventItem) {
    return false;
}

bool UIGS_EventItems::IsEventItem(const FGameplayTag inTagID) const {
    return false;
}

TArray<FIGS_EventItemTableRow> UIGS_EventItems::GetVisibleItems(UObject* inWCO) {
    return TArray<FIGS_EventItemTableRow>();
}

FIGS_EventItemTableRow UIGS_EventItems::GetEventItemData(UObject* inWCO, const FGameplayTag inItemID, bool& outSucceeded) {
    return FIGS_EventItemTableRow{};
}

TArray<FIGS_EventItemTableRow> UIGS_EventItems::GetActiveItems(UObject* inWCO) {
    return TArray<FIGS_EventItemTableRow>();
}


