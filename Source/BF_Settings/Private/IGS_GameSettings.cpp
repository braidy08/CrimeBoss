#include "IGS_GameSettings.h"

UIGS_GameSettings::UIGS_GameSettings() {
    this->bSettingsValid = true;
    this->Language = TEXT("en-US");
    this->bOnlyMainDialogues = false;
    this->bSubtitlesEnabledValue = true;
    this->bShowFPS = false;
    this->bShowPing = true;
    this->bUseWhiteBaker = false;
    this->bUseAltDollarDragon = true;
    this->bUseCampaignWeaponSkins = true;
    this->bHalloweenMode = true;
    this->MenuBackgroundIndex = 1;
    this->bTutorialsEnabled = true;
    this->bFriendlyOutline = true;
    this->bStreamerModeValue = false;
    this->HitMarkersSetting = EIGS_HitMarkersSetting::None;
    this->ColorVisionDeficiencyType = EColorVisionDeficiency::NormalVision;
    this->ShowCrosshairSetting = EIGS_ShowCrosshairSetting::None;
    this->HeadBobIntensity = 30.00f;
    this->ColorVisionDeficiencySeverity = 50.00f;
    this->bShowHeisterColorsInSubtitlesValue = true;
    this->bPoliceRadioChatterEnabled = true;
    this->bTinnitusAudioEffectEnabled = true;
    this->bUseSystemDefaultLanguage = true;
    this->bCrossplay = true;
    this->bChangedDefaultLanguage = false;
}

UIGS_GameSettings* UIGS_GameSettings::Instance() {
    return NULL;
}


