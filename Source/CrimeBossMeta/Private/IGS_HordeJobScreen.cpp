#include "IGS_HordeJobScreen.h"

UIGS_HordeJobScreen::UIGS_HordeJobScreen() {
    this->ItemWidgetClass = NULL;
    this->CategoryItemSelectionType = EIGS_MenuTileSelectionType::Basic;
    this->categoryWidget = NULL;
    this->m_JobsDatabase = NULL;
    this->m_JobManager = NULL;
}

void UIGS_HordeJobScreen::Open_Internal() {
}

void UIGS_HordeJobScreen::InitData() const {
}

TArray<UMETA_HordeModeMission*> UIGS_HordeJobScreen::GetBestJobsForScenarios(TArray<FIGS_MultiplayerJobCategoryItemRow> inScenarios) const {
    return TArray<UMETA_HordeModeMission*>();
}

void UIGS_HordeJobScreen::Close_Internal() {
}


