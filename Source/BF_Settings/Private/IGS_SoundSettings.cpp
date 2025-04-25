#include "IGS_SoundSettings.h"

UIGS_SoundSettings::UIGS_SoundSettings() {
    this->bSettingsValid = true;
    this->MasterVolumeValue = 100.00f;
    this->SFXVolumeValue = 80.00f;
    this->MusicVolumeValue = 100.00f;
    this->DialogueVolumeValue = 80.00f;
    this->ControllerSpeakerVolumeValue = 80.00f;
    this->LastOutputDevice = TEXT("Default Device");
    this->bAudioMixSpeakers = false;
    this->bSoundEnabledValue = true;
    this->bControllerSoundEnabledValue = true;
    this->bSoundInBackgroundEnabledValue = true;
    this->RadioDialogueOutputValue = 2;
    this->VoiceChatVolumeValue = 100.00f;
    this->bVoiceChatEnabledValue = false;
    this->VoiceChatActivationType = EIGS_VoiceChatActivationMode::VoiceThreshold;
}

UIGS_SoundSettings* UIGS_SoundSettings::Instance() {
    return NULL;
}


