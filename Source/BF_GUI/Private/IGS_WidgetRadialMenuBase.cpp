#include "IGS_WidgetRadialMenuBase.h"

UIGS_WidgetRadialMenuBase::UIGS_WidgetRadialMenuBase() {
    this->WheelMenuType = EIGS_WheelMenuType::None;
    this->bIsClosed = false;
    this->MaxItemCount = 12;
    this->MinimalItemCountRadius = 8;
    this->RadiusIncreasePerItem = 24.00f;
    this->ClampRadiusPercentage = 0.50f;
    this->EffectiveRadiusPercentage = 0.77f;
    this->CurrentRadius = 0.00f;
    this->CurrentSliceAngle = 0.00f;
    this->SliceOffset = 0.00f;
    this->AnalogDeadzone = 0.05f;
    this->RadialMenuCanvasPanel = NULL;
    this->WidgetRadialSliceClass = NULL;
    this->CurrentlyHoveredSlice = NULL;
}

void UIGS_WidgetRadialMenuBase::RequestSwitchToWheelType(EIGS_WheelMenuType inType) {
}




int32 UIGS_WidgetRadialMenuBase::GetItemCount() {
    return 0;
}


