#include "META_RandEventGangCondition.h"

FMETA_RandEventGangCondition::FMETA_RandEventGangCondition() {
    this->bAutomaticGangSelection = false;
    this->TargetGang = EMETA_Gang::None;
    this->ConsideringTimeInDays = 0;
    this->OccupiedTerritoriesOfOtherGang = 0;
    this->OccupiedTerritoriesOfPlayer = 0;
    this->LostOwnTerritoriesByOtherGang = 0;
    this->LostOwnTerritoriesByPlayer = 0;
}

