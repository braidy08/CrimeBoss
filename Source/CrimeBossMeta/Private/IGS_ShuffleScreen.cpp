#include "IGS_ShuffleScreen.h"

UIGS_ShuffleScreen::UIGS_ShuffleScreen() {
    this->ItemWidgetClass = NULL;
    this->CategoryItemSelectionType = EIGS_MenuTileSelectionType::Basic;
    this->categoryWidget = NULL;
    this->m_ChainManager = NULL;
    this->m_JobManager = NULL;
}

void UIGS_ShuffleScreen::Open_Internal() {
}

void UIGS_ShuffleScreen::InitData() const {
}


