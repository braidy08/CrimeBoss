#include "IGS_EarnedXPAnimationData.h"

UIGS_EarnedXPAnimationData::UIGS_EarnedXPAnimationData() {
    this->InitialLevel = 0;
    this->InitialProgress = 0.00f;
    this->NewLevel = 0;
    this->NewProgress = 0.00f;
    this->DelayBetweenAnims = 0.50f;
    this->DisplayXPBadgeOnActiveEvent = true;
}

int32 UIGS_EarnedXPAnimationData::GetFinalPoints() const {
    return 0;
}


