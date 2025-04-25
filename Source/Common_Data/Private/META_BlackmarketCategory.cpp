#include "META_BlackmarketCategory.h"

FMETA_BlackmarketCategory::FMETA_BlackmarketCategory() {
    this->FilterType = EMETA_BlackmarketItemFilterType::Any;
    this->bUseCustomImportance = false;
    this->Importance = 0;
    this->MinimumCount = 0;
    this->bHasMaximumRange = false;
    this->MaximumCount = 0;
    this->ChanceToHappen = 0.00f;
}

