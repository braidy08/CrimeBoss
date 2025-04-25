#include "IGS_GameUISettings.h"

UIGS_GameUISettings::UIGS_GameUISettings() {
    this->UIInputActions.AddDefaulted(29);
    this->LeftThumbstickMenuThreshold = 0.50f;
    this->ChatWheelActionLimit = 3;
    this->ChatWheelActionLimitTime = 5.00f;
    this->ChatWheelCooldownTime = 5.00f;
    this->IconVisibilityDuration = 5.00f;
}


