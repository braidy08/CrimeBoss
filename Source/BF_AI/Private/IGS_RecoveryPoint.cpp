#include "IGS_RecoveryPoint.h"

AIGS_RecoveryPoint::AIGS_RecoveryPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AIGS_RecoveryPoint::OnNavigationBuildFinished(ANavigationData* inNavData) {
}

FVector AIGS_RecoveryPoint::GetRecoveryPosition() const {
    return FVector{};
}


