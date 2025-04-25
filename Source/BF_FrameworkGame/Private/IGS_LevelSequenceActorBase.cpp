#include "IGS_LevelSequenceActorBase.h"
#include "Net/UnrealNetwork.h"

AIGS_LevelSequenceActorBase::AIGS_LevelSequenceActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = false;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_None;
    this->mbR_SequenceStarted = false;
    this->mbR_SequenceFinished = false;
}

void AIGS_LevelSequenceActorBase::PlaySequence() {
}

void AIGS_LevelSequenceActorBase::OnSequenceFinished() {
}

void AIGS_LevelSequenceActorBase::OnRep_SequenceStarted() {
}

void AIGS_LevelSequenceActorBase::OnRep_SequenceFinished() {
}

void AIGS_LevelSequenceActorBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_LevelSequenceActorBase, mbR_SequenceStarted);
    DOREPLIFETIME(AIGS_LevelSequenceActorBase, mbR_SequenceFinished);
    DOREPLIFETIME(AIGS_LevelSequenceActorBase, mR_EndFrameTime);
}


