#include "IGS_Quickplay_JobManagerComponent.h"

UIGS_Quickplay_JobManagerComponent::UIGS_Quickplay_JobManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_Entitlements = NULL;
}

void UIGS_Quickplay_JobManagerComponent::SetJobPlayedToMissionStatistics(const FGameplayTag inJobCategoryTag, int32 inPlayCount, bool inSave) {
}

void UIGS_Quickplay_JobManagerComponent::SavePendingNewChanges() {
}

void UIGS_Quickplay_JobManagerComponent::RemoveJobCategoryFromPendingNew(const FGameplayTag inJobCategoryTag) {
}

void UIGS_Quickplay_JobManagerComponent::ProcessMissionResultByMissionSubtype(const FIGS_MissionResult& inResult, APlayerState* inPlayerState, FDateTime inCurrentDateTime) {
}

bool UIGS_Quickplay_JobManagerComponent::IsPendingNew(const FGameplayTag inJobCategoryTag) const {
    return false;
}

TArray<FIGS_MultiplayerJobCategoryItemRow> UIGS_Quickplay_JobManagerComponent::GetRecommendedJobsTableRows(const UDataTable* inRecommendedDataTable) {
    return TArray<FIGS_MultiplayerJobCategoryItemRow>();
}

TArray<UMETA_HordeModeMission*> UIGS_Quickplay_JobManagerComponent::GetRecentHordeModeMissions(int32 inMaxCount, bool inIncludeBest, FGameplayTagContainer inScenariosToFilter) const {
    return TArray<UMETA_HordeModeMission*>();
}

FGameplayTagContainer UIGS_Quickplay_JobManagerComponent::GetRandomScenarioForQJLobby() {
    return FGameplayTagContainer{};
}

FIGS_Quick_MissionStatistics UIGS_Quickplay_JobManagerComponent::GetMissionStatisticsForCategory(FGameplayTag inJobCategoryTag, bool inExactMatch) const {
    return FIGS_Quick_MissionStatistics{};
}

UMETA_HordeModeMission* UIGS_Quickplay_JobManagerComponent::GetBestHordeModeMission(FGameplayTagContainer inScenariosToFilter) const {
    return NULL;
}

void UIGS_Quickplay_JobManagerComponent::AddHordeModeMission(UMETA_HordeModeMission* inHordeModeMission) {
}


