#include "IGS_BTService_EvaluateCoversV2.h"

UIGS_BTService_EvaluateCoversV2::UIGS_BTService_EvaluateCoversV2() {
    this->NodeName = TEXT("Evaluate Covers V2");
    this->CoverEQS = NULL;
    this->EQSCooldown = 2.00f;
    this->FoundBestCoverValidFor = 5.00f;
    this->MaxDistanceFromCover = 2500.00f;
}


