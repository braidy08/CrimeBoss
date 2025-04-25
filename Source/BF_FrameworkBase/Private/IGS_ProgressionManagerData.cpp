#include "IGS_ProgressionManagerData.h"

UIGS_ProgressionManagerData::UIGS_ProgressionManagerData() {
    this->InitialLevel = 1;
    this->UseLevelCap = false;
    this->LevelCap = 0;
    this->UseLevelCount = false;
    this->LevelUpCount = 1;
    this->CoopMoneyCalculationConstant = 0.50f;
    this->MissionNotSupportingStars = 15.00f;
}


