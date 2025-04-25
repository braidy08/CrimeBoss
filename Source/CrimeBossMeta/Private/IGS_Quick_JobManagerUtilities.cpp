#include "IGS_Quick_JobManagerUtilities.h"

UIGS_Quick_JobManagerUtilities::UIGS_Quick_JobManagerUtilities() {
}

void UIGS_Quick_JobManagerUtilities::SavePendingNewChanges(const UObject* inWCO) {
}

void UIGS_Quick_JobManagerUtilities::RemoveJobCategoryFromPendingNew(const UObject* inWCO, const FGameplayTag inJobCategoryTag) {
}

bool UIGS_Quick_JobManagerUtilities::IsJobCategoryPendingNew(const UObject* inWCO, const FGameplayTag inJobCategoryTag) {
    return false;
}

FIGS_Quick_JobManagerSaveData UIGS_Quick_JobManagerUtilities::InitializeJobCategoriesStatistics(UObject* inWCO) {
    return FIGS_Quick_JobManagerSaveData{};
}

float UIGS_Quick_JobManagerUtilities::GetServerWorldTimeWithRTT(const UObject* inWCO) {
    return 0.0f;
}


