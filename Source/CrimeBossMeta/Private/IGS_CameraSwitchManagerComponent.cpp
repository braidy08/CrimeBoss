#include "IGS_CameraSwitchManagerComponent.h"

UIGS_CameraSwitchManagerComponent::UIGS_CameraSwitchManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SwitchCameraOnScreenOpen = true;
    this->FadeDuration = 0.10f;
    this->DelayBetweenDuration = 0.20f;
    this->CameraLevelsVisibilityTable = NULL;
    this->m_CurrentCamera = NULL;
    this->m_PlayerCameraManager = NULL;
    this->m_LevelActorsManager = NULL;
    this->m_LocalPlayerController = NULL;
    this->m_LevelsVisibilityManager = NULL;
    this->m_ScreenHandler = NULL;
}

void UIGS_CameraSwitchManagerComponent::TrySwitchToCamera(const FGameplayTag inCameraTag, bool inFade) {
}

void UIGS_CameraSwitchManagerComponent::SwitchToCamera_Internal(AMETA_Camera* inCamera, bool inFade) {
}

void UIGS_CameraSwitchManagerComponent::OnSwitchToCameraStarted_Internal(const FGameplayTag inCameraTag, bool inFade) {
}

void UIGS_CameraSwitchManagerComponent::OnSwitchToCameraFinished_Internal(const FGameplayTag inCameraTag) {
}

void UIGS_CameraSwitchManagerComponent::OnOpenScreenWithCameraTag_Internal(FGameplayTag inCameraTag) {
}

void UIGS_CameraSwitchManagerComponent::OnLevelsShown_Internal() {
}

void UIGS_CameraSwitchManagerComponent::OnBlendToViewTargetFinished_Internal(const FGameplayTag inCameraTag, bool inFade) {
}

bool UIGS_CameraSwitchManagerComponent::IsCameraSwitchingInProgress() const {
    return false;
}

FGameplayTag UIGS_CameraSwitchManagerComponent::GetCurrentCameraTag() const {
    return FGameplayTag{};
}

AMETA_Camera* UIGS_CameraSwitchManagerComponent::GetCurrentCamera() const {
    return NULL;
}


