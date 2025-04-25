#pragma once
#include "CoreMinimal.h"
#include "IGS_FPS2Meta_Data.h"
#include "IGS_SharedMetaTransfer_Data.h"
#include "Components/ActorComponent.h"
#include "IGS_HordeModeActiveSignatureDelegate.h"
#include "IGS_HordeModeTokenAddedSignatureDelegate.h"
#include "IGS_HordeModeValues.h"
#include "IGS_HordeModeValuesChangedSignatureDelegate.h"
#include "IGS_HordeModeWaveChangedSignatureDelegate.h"
#include "IGS_HordeModeManager.generated.h"

class UIGS_HordeModeManager;
class UIGS_HordeModeSettings;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_HordeModeManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_HordeModeActiveSignature OnHordeModeActiveChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_HordeModeValuesChangedSignature OnHordeModeValuesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_HordeModeTokenAddedSignature OnHordeModeTokenAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_HordeModeTokenAddedSignature OnHordeModeTotalEarnedTokensChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_HordeModeWaveChangedSignature OnHordeModeCurrentWaveChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_HordeModeWaveChangedSignature OnHordeModeCompletedWaveChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HordeModeActive, meta=(AllowPrivateAccess=true))
    bool bIsHordeModeActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HordeModeValues, meta=(AllowPrivateAccess=true))
    FIGS_HordeModeValues HordeModeValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrenWave, meta=(AllowPrivateAccess=true))
    int32 CurrentWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CompletedWave, meta=(AllowPrivateAccess=true))
    int32 CompletedWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TotalEarnedTokens, meta=(AllowPrivateAccess=true))
    int32 TotalEarnedTokens;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_HordeModeSettings* Settings;
    
public:
    UIGS_HordeModeManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    static void SetHordeModeCurrentWave(const UObject* inWCO, int32 inWave);
    
    UFUNCTION(BlueprintCallable)
    static void SetHordeModeCounterValues(const UObject* inWCO, int32 inTotalValue, float inCurrentProgress);
    
    UFUNCTION(BlueprintCallable)
    static void SetHordeModeCompletedWave(const UObject* inWCO, int32 inWave);
    
    UFUNCTION(BlueprintCallable)
    static void SetHordeModeActive(const UObject* inWCO, bool Inactive);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_TotalEarnedTokens(int32 inOldTotalEarnedTokens);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HordeModeValues(FIGS_HordeModeValues inOldValues);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HordeModeActive(bool inOldHordeModeActive);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrenWave(int32 inOldWave);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CompletedWave(int32 inOldWave);
    
    UFUNCTION(BlueprintCallable)
    void OnFPS2MetaDataRequested(FIGS_SharedMetaTransfer_Data& refSharedData, FIGS_FPS2Meta_Data& refFPSData) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="inWorldContextObject"))
    static UIGS_HordeModeManager* Instance(const UObject* inWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_HordeModeSettings* GetSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetHordeModeTotalEarnedTokens(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UIGS_HordeModeManager* GetHordeModeManager(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void AddTokensToAllPlayers(const UObject* inWCO, int32 inTokensCount);
    
};

