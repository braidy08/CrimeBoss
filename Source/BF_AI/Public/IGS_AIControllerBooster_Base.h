#pragma once
#include "CoreMinimal.h"
#include "IGS_BoostData.h"
#include "UObject/NoExportTypes.h"
#include "IGS_AIControllerGame.h"
#include "Templates/SubclassOf.h"
#include "IGS_AIControllerBooster_Base.generated.h"

class UAkAudioEvent;
class UGameplayEffect;
class UNiagaraSystem;
class UObject;

UCLASS(Blueprintable)
class BF_AI_API AIGS_AIControllerBooster_Base : public AIGS_AIControllerGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BoostStartAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BoostEndAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* BoostedVisualEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* BoostWaveVisualEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VisualEffectAttachBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_BoostData CustomBoostData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDataFromDatabase;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> m_GameplayEffect;
    
public:
    AIGS_AIControllerBooster_Base(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnlockBoosting(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    void LockBoosting(const UObject* inWCO);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleWaveBoost(const int32 inWavesRemaining);
    
public:
    UFUNCTION(BlueprintCallable)
    void CreateCustomBoost(const FVector InLocation, const bool inParticles, const bool InAnimation, const bool inAudio);
    
private:
    UFUNCTION(BlueprintCallable)
    void Cleanup();
    
};

