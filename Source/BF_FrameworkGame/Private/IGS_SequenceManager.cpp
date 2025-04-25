#include "IGS_SequenceManager.h"
#include "Net/UnrealNetwork.h"

UIGS_SequenceManager::UIGS_SequenceManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bLevelLoaded = false;
}

void UIGS_SequenceManager::Test_ForcePlayReplicatedData() {
}

void UIGS_SequenceManager::PlaySequenceMulticast_Implementation(ALevelSequenceActor* inLevelSequence) {
}

void UIGS_SequenceManager::PlaySequence(ALevelSequenceActor* inLevelSequence) {
}

void UIGS_SequenceManager::OnRep_FinishedLevelSequence() {
}

void UIGS_SequenceManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_SequenceManager, mR_FinishedLevelSequence);
}


