#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_SequenceManager.generated.h"

class ALevelSequenceActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_SequenceManager : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLevelLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FinishedLevelSequence, meta=(AllowPrivateAccess=true))
    TArray<ALevelSequenceActor*> mR_FinishedLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALevelSequenceActor*> m_LocallyStartedSequences;
    
public:
    UIGS_SequenceManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Test_ForcePlayReplicatedData();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlaySequenceMulticast(ALevelSequenceActor* inLevelSequence);
    
    UFUNCTION(BlueprintCallable)
    void PlaySequence(ALevelSequenceActor* inLevelSequence);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_FinishedLevelSequence();
    
};

