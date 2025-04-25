#include "IGS_PlayerControllerFramework.h"

AIGS_PlayerControllerFramework::AIGS_PlayerControllerFramework(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->CurrentPawn = NULL;
}

void AIGS_PlayerControllerFramework::SetShowCrosshair(bool inShowCrosshair) const {
}



EIGS_NetworkMonitorStatus AIGS_PlayerControllerFramework::GetPacketLossState() const {
    return EIGS_NetworkMonitorStatus::None;
}

float AIGS_PlayerControllerFramework::GetNetworkPacketLoss() const {
    return 0.0f;
}

float AIGS_PlayerControllerFramework::GetNetworkLatency() const {
    return 0.0f;
}

float AIGS_PlayerControllerFramework::GetNetworkJitter() const {
    return 0.0f;
}

EIGS_NetworkMonitorStatus AIGS_PlayerControllerFramework::GetLatencyState() const {
    return EIGS_NetworkMonitorStatus::None;
}

EIGS_NetworkMonitorStatus AIGS_PlayerControllerFramework::GetJitterState() const {
    return EIGS_NetworkMonitorStatus::None;
}



