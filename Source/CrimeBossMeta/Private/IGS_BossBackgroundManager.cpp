#include "IGS_BossBackgroundManager.h"
#include "Net/UnrealNetwork.h"

UIGS_BossBackgroundManager::UIGS_BossBackgroundManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_DataTable = NULL;
    this->m_BackgroundChangeInProgress = false;
}

void UIGS_BossBackgroundManager::UnloadIncorrectLevel(FName inLevelToUnload) {
}

void UIGS_BossBackgroundManager::SetCurrentBackgroundLevelByProgressionLevel(int32 inProgressionLevel) {
}

void UIGS_BossBackgroundManager::OnRep_CurrentBackgroundLevelName() {
}

void UIGS_BossBackgroundManager::LoadCorrectLevel(FName inLevelToLoad) {
}

void UIGS_BossBackgroundManager::LevelHandlingFinished() {
}

bool UIGS_BossBackgroundManager::IsAnyBackgroundLoaded() {
    return false;
}

void UIGS_BossBackgroundManager::IncorrectLevelUnloaded() {
}

FName UIGS_BossBackgroundManager::GetNameForLevel(int32 inLevel) {
    return NAME_None;
}

TArray<FName> UIGS_BossBackgroundManager::GetLoadedBackgroundLevelNames() const {
    return TArray<FName>();
}

void UIGS_BossBackgroundManager::ForceLevelVisbility(FName inLevel, bool inShouldBeVisible) {
}

void UIGS_BossBackgroundManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_BossBackgroundManager, CurrentBackgroundLevelName);
}


