#include "IGS_VirtualCursor.h"

AIGS_VirtualCursor::AIGS_VirtualCursor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ColliderComponent = NULL;
}

bool AIGS_VirtualCursor::IsSupportedScreenOpen(UIGS_GameScreenHandler* inGameScreenHandler) const {
    return false;
}

TScriptInterface<IVirtualCursorTarget> AIGS_VirtualCursor::GetClosestTargetInDirection(FVector InDirection, const TArray<AActor*>& inActors) {
    return NULL;
}

TScriptInterface<IVirtualCursorTarget> AIGS_VirtualCursor::GetClosestOverlappedTarget() {
    return NULL;
}


