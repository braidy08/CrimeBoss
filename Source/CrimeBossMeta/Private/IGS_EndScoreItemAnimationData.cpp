#include "IGS_EndScoreItemAnimationData.h"

UIGS_EndScoreItemAnimationData::UIGS_EndScoreItemAnimationData() {
    this->InitValue = 0;
    this->FinalValue = 0;
    this->Duration = 0.00f;
    this->DisplayDollars = false;
    this->DisplayDollarsSign = false;
}

void UIGS_EndScoreItemAnimationData::SetData(int32 inInitValue, int32 inFinalValue, FText inTextFormat, float inDuration, bool inDisplayDollars, bool inDisplayDollarsSign) {
}


