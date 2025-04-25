#include "IGS_InputDeviceDetectorComponent.h"

UIGS_InputDeviceDetectorComponent::UIGS_InputDeviceDetectorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GamepadDeadzone = 0.15f;
}

void UIGS_InputDeviceDetectorComponent::OnControllerDisconnected() {
}

EIGS_InputDevice UIGS_InputDeviceDetectorComponent::GetCurrentInputDevice() const {
    return EIGS_InputDevice::ID_UNKNOWN;
}


