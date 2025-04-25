#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "IGS_TagTriggeredEffectDef.h"
#include "IGS_EffectsHandlerComponent.generated.h"

class UAkAudioEvent;
class UNiagaraSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_EffectsHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Effects, meta=(AllowPrivateAccess=true))
    TArray<FIGS_TagTriggeredEffectDef> Effects;
    
public:
    UIGS_EffectsHandlerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnTagCountChanged(const FGameplayTag inGameplayTag, int32 inCount);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Effects(const TArray<FIGS_TagTriggeredEffectDef>& inOldValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_PlayCustomEffect(UNiagaraSystem* inNiagaraEffect, FName inNiagaraAttachBoneName, UAkAudioEvent* inEffectAkEvent, const bool inReplicated, const TArray<FName>& inFloatParameterNames, const TArray<float>& inFloatParameterValues);
    
};

