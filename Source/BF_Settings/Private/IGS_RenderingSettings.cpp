#include "IGS_RenderingSettings.h"

UIGS_RenderingSettings::UIGS_RenderingSettings() {
    this->bSettingsValid = true;
    this->FullscreenModeValue = 1;
    this->ResolutionValue = 22;
    this->VSyncEnabledValue = true;
    this->ResolutionScaleValue = 100.00f;
    this->ProfileValue = 0;
    this->ViewDistanceQualityValue = 2;
    this->AntiAliasingQualityValue = 3;
    this->PostProcessingQualityValue = 2;
    this->ShadowQualityValue = 2;
    this->TextureQualityValue = 2;
    this->VisualEffectQualityValue = 2;
    this->FoliageQualityValue = 2;
    this->MotionBlurScaleFPV = 1.00f;
    this->MotionBlurScale3PV = 1.00f;
    this->BaseCameraFOVHorizontal = 110.00f;
    this->bWasFirstTimeBenchmarked = false;
    this->bWasFirstTimeMainMenuInitialized = false;
    this->DLSSMode = 0;
    this->XeSSmode = 0;
    this->FSRmode = 0;
    this->FrameGenerationMode = 0;
    this->ReflexMode = 0;
    this->bDLAAenabled = false;
    this->ChosenDisplay = 0;
    this->MotionBlurEnabled = false;
    this->bSSREnabled = true;
    this->bAOEnabled = true;
    this->SharpenFilterStrength = 10;
    this->FramerateLimitInGame = 74;
    this->FramerateLimitInMenu = 74;
    this->FramerateLimitOutOfFocus = 60;
    this->bCanChangeMonitorPositions = true;
    this->bQualityModeForConsoles = false;
    this->m_ExtendedSettingsParameterCollection = NULL;
}

float UIGS_RenderingSettings::VerticalFOVToActualHorizontalFOV(float inVerticalFOV, FVector2D inViewportSize) {
    return 0.0f;
}

void UIGS_RenderingSettings::UseLockpickRenderingSettings(bool inIsLockpicking) {
}

void UIGS_RenderingSettings::UseBotWheelRenderingSettings(bool inIsPaused) {
}

void UIGS_RenderingSettings::SetQualityLevels_Auto(bool inRunBenchmark) {
}

void UIGS_RenderingSettings::SetIsGamePausedInMenu(bool inIsPausedInMenu) {
}

void UIGS_RenderingSettings::SetIsCurrentGameModeMenu(bool inIsMenu) {
}

void UIGS_RenderingSettings::SetFramerateUnlockedCinematic(bool inUnlocked) {
}

UIGS_RenderingSettings* UIGS_RenderingSettings::Instance() {
    return NULL;
}

float UIGS_RenderingSettings::HorizontalFOV2VerticalFOV(float inHorizontalFOV) {
    return 0.0f;
}

TArray<FIntPoint> UIGS_RenderingSettings::GetSupportedScreenResolutions() {
    return TArray<FIntPoint>();
}

bool UIGS_RenderingSettings::GetIsSteamDeck() {
    return false;
}

void UIGS_RenderingSettings::EnableReducedTexturePoolSize() {
}

void UIGS_RenderingSettings::EnableMovieCVarSettings() const {
}

void UIGS_RenderingSettings::DisableMovieCVarSettings() const {
}


