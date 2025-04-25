#include "IGS_LevelData.h"

FIGS_LevelData::FIGS_LevelData() {
    this->Visibility = EIGS_LevelVisibility::Visible;
    this->DefaultVisibility = EIGS_LevelVisibility::Visible;
    this->LevelCategory = EIGS_LevelCategory::None;
    this->UnloadOnHide = false;
}

