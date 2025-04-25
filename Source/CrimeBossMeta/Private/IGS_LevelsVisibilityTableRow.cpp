#include "IGS_LevelsVisibilityTableRow.h"

FIGS_LevelsVisibilityTableRow::FIGS_LevelsVisibilityTableRow() {
    this->DefaultVisibility = EIGS_LevelVisibility::Visible;
    this->LevelCategory = EIGS_LevelCategory::None;
    this->UnloadOnHide = false;
}

