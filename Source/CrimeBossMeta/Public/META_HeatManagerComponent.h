#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EMETA_Gang.h"
#include "EMETA_Heat.h"
#include "META_DetectiveInfo.h"
#include "META_TimedEffect.h"
#include "IGS_HeatManagerBaseComponent.h"
#include "Templates/SubclassOf.h"
#include "META_HeatManagerComponent.generated.h"

class UMETA_DetectiveID;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_HeatManagerComponent : public UIGS_HeatManagerBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_Gang, int32> GangsAttacksCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_Gang SheriffTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UMETA_DetectiveID>> DetectivesPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UMETA_DetectiveID>, FMETA_DetectiveInfo> ActiveDetectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<int32> UsedInvestigationValuesForDetectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UMETA_DetectiveID>> DeadDetectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastAmountDetectivesToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_Heat HeatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoliceInvestigationValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviousPoliceInvestigationValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_TimedEffect> TimedEffects;
    
public:
    UMETA_HeatManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveTimedEffect(const FGameplayTag inEffectTag);
    
    UFUNCTION(BlueprintCallable)
    bool IsTimedEffectActive(const FGameplayTag inEffectTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInvestigationGrowthRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHeatGrowthRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetCombinedEffects(const FGameplayTagContainer inEffectFilter, float& outCombinedValue, int32& OutDuration) const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeTimedEffectPercentageModifier(const FGameplayTag inEffectTag, const int32 inPercentageChange);
    
    UFUNCTION(BlueprintCallable)
    void ChangeTimedEffectDuration(const FGameplayTag inEffectTag, const int32 inDurationChange);
    
    UFUNCTION(BlueprintCallable)
    void ChangeDurationOfAllTimedEffects(const int32 inDurationChange);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculateInvestigationChangeWithModifiers(const float inInvestigationChange) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculateHeatChangeWithModifiers(const float inHeatChange) const;
    
    UFUNCTION(BlueprintCallable)
    void AddTimedEffect(const FGameplayTag inEffectTag, const int32 inPercentModifier, const int32 inDuration);
    
    UFUNCTION(BlueprintCallable)
    void AddInvestigationEffect(const FGameplayTag inEffectTag, const int32 inPercentModifier, const int32 inDuration);
    
    UFUNCTION(BlueprintCallable)
    void AddHeatEffect(const FGameplayTag inEffectTag, const int32 inPercentModifier, const int32 inDuration);
    
};

