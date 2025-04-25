#include "IGS_StealthSettings.h"

UIGS_StealthSettings::UIGS_StealthSettings() {
    this->DefaultDetectionUpTime = 2.00f;
    this->DetectionUpMuliplierCiv = 0.60f;
    this->VisionConeMaxDistanceCiv = 1200.00f;
    this->VisionHalfAngleDegCiv = 45.00f;
    this->DetectionUpMuliplierEmployee = 0.60f;
    this->VisionConeMaxDistanceEmployee = 1200.00f;
    this->VisionHalfAngleDegEmployee = 45.00f;
    this->DetectionUpFirstStageMultiplierGuard = 1.00f;
    this->DetectionUpSecondStageMultiplierGuard = 1.00f;
    this->VisionConeMaxDistanceGuard = 1200.00f;
    this->VisionHalfAngleDegGuard = 45.00f;
    this->DetectionUpFirstStageMultiplierCop = 1.00f;
    this->DetectionUpSecondStageMultiplierCop = 1.00f;
    this->VisionConeMaxDistanceCop = 1200.00f;
    this->VisionHalfAngleDegCop = 45.00f;
    this->DetectionUpFirstStageMultiplierGangster = 1.00f;
    this->DetectionUpSecondStageMultiplierGangster = 1.00f;
    this->VisionConeMaxDistanceGangster = 1200.00f;
    this->VisionHalfAngleDegGangster = 45.00f;
    this->DetectionDownTime = 5.00f;
    this->CrouchDetectionMultiplier = 0.60f;
    this->SprintDetectionMultiplier = 2.00f;
    this->AnimationOffsetMaxMultiplier = 0.50f;
    this->BotDetectionMuliplier = 0.20f;
    this->BotCatchingUpDetectionMultiplier = 0.25f;
    this->CombatStateDetectionMuliplier = 4.00f;
    this->FootstepDetectionMuliplier = 0.90f;
    this->CameraDetectionUpTime = 3.00f;
    this->CameraDetectionDownTime = 2.00f;
    this->CameraDetectionPlayerIdleCoef = 0.66f;
    this->DetectionIncreaseThreshold = 0.05f;
    this->DetectionStartThreshold = 0.03f;
    this->DetectedCooldown = 3.00f;
    this->DetectionMidPoint = 0.50f;
    this->UseFootstepDetection = true;
    this->StrikeAddedCooldown = 5.00f;
    this->CivEscapedDelay = 10.00f;
    this->CivEscapedStrikes = 1;
    this->ZiptieNavigationFilter = NULL;
    this->MaxFollowerCount = 3;
    this->TimeToForgetTarget = 5.00f;
    this->VisionCapsuleRadius = 400.00f;
}


