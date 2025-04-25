#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LevelSequenceActor.h"
#include "IGS_LevelSequenceActorBase.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_LevelSequenceActorBase : public ALevelSequenceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SequenceStarted, meta=(AllowPrivateAccess=true))
    bool mbR_SequenceStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SequenceFinished, meta=(AllowPrivateAccess=true))
    bool mbR_SequenceFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SequenceFinished, meta=(AllowPrivateAccess=true))
    FFrameTime mR_EndFrameTime;
    
public:
    AIGS_LevelSequenceActorBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void PlaySequence();
    
    UFUNCTION(BlueprintCallable)
    void OnSequenceFinished();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SequenceStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SequenceFinished();
    
};

