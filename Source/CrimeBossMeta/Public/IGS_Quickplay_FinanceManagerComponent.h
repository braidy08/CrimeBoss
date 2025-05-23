#pragma once
#include "CoreMinimal.h"
#include "IGS_UnlockItemInfo.h"
#include "IGS_MissionResult.h"
#include "IGS_MissionResultRewardItem.h"
#include "GameplayTagContainer.h"
#include "IGS_FinanceManagerBaseComponent.h"
#include "IGS_Quickplay_FinanceManagerComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_Quickplay_FinanceManagerComponent : public UIGS_FinanceManagerBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Balance;
    
public:
    UIGS_Quickplay_FinanceManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetBalance(int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void CheckAccumulatedMultiplierFromUPD15Patch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalculateUnlockItemCostFromInfo(const FIGS_UnlockItemInfo& inUnlockItemInfo, const float inRelativePrice) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalculateUnlockItemCost(const FGameplayTag inTagID, const float inRelativePrice) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalculateMissionRewardWithMultipliers(const FIGS_MissionResult& inMissionResult, int32& outMissionReward, float& outMultiplier, TArray<FIGS_MissionResultRewardItem>& outRewardItems) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalculateBaseMissionReward(const FIGS_MissionResult& inMissionResult, int32& outMissionReward) const;
    
    UFUNCTION(BlueprintCallable)
    void AddBalance(int32 InValue);
    
};

