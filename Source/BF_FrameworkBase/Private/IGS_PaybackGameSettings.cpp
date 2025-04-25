#include "IGS_PaybackGameSettings.h"

UIGS_PaybackGameSettings::UIGS_PaybackGameSettings() {
    this->JitterWarningThreshold = 30.00f;
    this->JitterSevereThreshold = 50.00f;
    this->PacketLossWarningThreshold = 0.05f;
    this->PacketLossSevereThreshold = 0.10f;
    this->LatencyWarningThreshold = 100.00f;
    this->LatencySevereThreshold = 150.00f;
}


