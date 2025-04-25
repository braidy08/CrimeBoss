#include "IGS_EffectsHandlerComponent.h"
#include "Net/UnrealNetwork.h"

UIGS_EffectsHandlerComponent::UIGS_EffectsHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_EffectsHandlerComponent::OnTagCountChanged(const FGameplayTag inGameplayTag, int32 inCount) {
}

void UIGS_EffectsHandlerComponent::OnRep_Effects(const TArray<FIGS_TagTriggeredEffectDef>& inOldValue) {
}

void UIGS_EffectsHandlerComponent::Multicast_PlayCustomEffect_Implementation(UNiagaraSystem* inNiagaraEffect, FName inNiagaraAttachBoneName, UAkAudioEvent* inEffectAkEvent, const bool inReplicated, const TArray<FName>& inFloatParameterNames, const TArray<float>& inFloatParameterValues) {
}

void UIGS_EffectsHandlerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_EffectsHandlerComponent, Effects);
}


