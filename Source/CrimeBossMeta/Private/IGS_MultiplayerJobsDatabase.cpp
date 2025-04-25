#include "IGS_MultiplayerJobsDatabase.h"

UIGS_MultiplayerJobsDatabase::UIGS_MultiplayerJobsDatabase() {
}

FGameplayTagContainer UIGS_MultiplayerJobsDatabase::GetScenariosForJob(UObject* inWCO, const FGameplayTag inJobTag) {
    return FGameplayTagContainer{};
}

FIGS_MultiplayerJobCategoryRow UIGS_MultiplayerJobsDatabase::GetMultiplayerJobCategory(UObject* inWCO, const FGameplayTag inMultiplayerJobCategoryID, bool& outSucceeded) {
    return FIGS_MultiplayerJobCategoryRow{};
}

TArray<FIGS_MultiplayerJobCategoryItemRow> UIGS_MultiplayerJobsDatabase::GetJobsInCategory(UObject* inWCO, FGameplayTag inCategoryTag) {
    return TArray<FIGS_MultiplayerJobCategoryItemRow>();
}

FGameplayTag UIGS_MultiplayerJobsDatabase::GetJobCategoryTagFromMissionObject(UObject* inWCO, const UMETA_BaseFPSMission* inMission) {
    return FGameplayTag{};
}

FIGS_MultiplayerJobCategoryItemRow UIGS_MultiplayerJobsDatabase::GetItemRow(UObject* inWCO, const FGameplayTag inItemRowID) {
    return FIGS_MultiplayerJobCategoryItemRow{};
}

TArray<FIGS_MultiplayerJobCategoryItemRow> UIGS_MultiplayerJobsDatabase::GetHordeJobSubCategories(UObject* inWCO) {
    return TArray<FIGS_MultiplayerJobCategoryItemRow>();
}

TArray<FIGS_MultiplayerJobCategoryRow> UIGS_MultiplayerJobsDatabase::GetHordeJobCategories(UObject* inWCO) {
    return TArray<FIGS_MultiplayerJobCategoryRow>();
}

TArray<FIGS_MultiplayerJobCategoryItemRow> UIGS_MultiplayerJobsDatabase::GetCommonJobSubCategories(UObject* inWCO) {
    return TArray<FIGS_MultiplayerJobCategoryItemRow>();
}

TArray<FIGS_MultiplayerJobCategoryRow> UIGS_MultiplayerJobsDatabase::GetCommonJobCategories(UObject* inWCO) {
    return TArray<FIGS_MultiplayerJobCategoryRow>();
}

TArray<FIGS_ChainMission> UIGS_MultiplayerJobsDatabase::GetChainMissions(UObject* inWCO) {
    return TArray<FIGS_ChainMission>();
}

TArray<FIGS_MultiplayerJobCategoryRow> UIGS_MultiplayerJobsDatabase::GetAllCategories(UObject* inWCO) {
    return TArray<FIGS_MultiplayerJobCategoryRow>();
}


