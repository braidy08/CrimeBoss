#include "IGS_LevelsVisibilityManagerComponent.h"

UIGS_LevelsVisibilityManagerComponent::UIGS_LevelsVisibilityManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultLevelVisibilityTable = NULL;
}

void UIGS_LevelsVisibilityManagerComponent::SetLevelVisibility(const FName& inLevelName, EIGS_LevelVisibility InVisibility) {
}

void UIGS_LevelsVisibilityManagerComponent::OverrideDefaultLevelVisibility(FName inLevelName, EIGS_LevelVisibility InVisibility) {
}

void UIGS_LevelsVisibilityManagerComponent::OnLevelVisibilityChanged() {
}

void UIGS_LevelsVisibilityManagerComponent::OnCutsceneStarted(FName inCutsceneID, FIGS_MetaCutsceneResults inResults) {
}

void UIGS_LevelsVisibilityManagerComponent::OnCutsceneFinished(FName inCutsceneID, FIGS_MetaCutsceneResults inResults) {
}

bool UIGS_LevelsVisibilityManagerComponent::MarkLevelsVisibility(const EIGS_LevelsVisibilityModifier inVisibilityModifier, const TArray<FIGS_LevelVisibility>& inLevelVisibilities) {
    return false;
}

bool UIGS_LevelsVisibilityManagerComponent::AreAllLevelsCorrectlyVisible() const {
    return false;
}


