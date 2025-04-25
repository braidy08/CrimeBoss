#pragma once
#include "CoreMinimal.h"
#include "IGS_MissionResult.h"
#include "IGS_MissionResultRewardItem.h"
#include "GameplayTagContainer.h"
#include "IGS_Screen.h"
#include "IGS_AnimationData.h"
#include "IGS_DebriefAnimationSequenceData.h"
#include "IGS_DebriefScreenEventDelegate.h"
#include "IGS_DebriefScreen.generated.h"

class UIGS_AnimatedWidget;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UIGS_DebriefScreen : public UIGS_Screen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSkipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DebriefScreenEvent OnContinueEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_AnimationData> m_AnimationQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_AnimatedWidget* m_CurrentAnimatedWidget;
    
public:
    UIGS_DebriefScreen();

    UFUNCTION(BlueprintCallable)
    void StartAnimatedDebrief();
    
    UFUNCTION(BlueprintCallable)
    void SetMissionResult(const FIGS_MissionResult& inMissionResult, const TArray<FIGS_MissionResultRewardItem>& inMissionRewards);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSkipped(bool inIsSkipped);
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayNextAnimation();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDebriefBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSkipped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimationFinishedBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIGS_MissionResultRewardItem> GetXpRewards() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FIGS_DebriefAnimationSequenceData> GetRewardUISequenceData(UPARAM(Ref) TArray<FIGS_MissionResultRewardItem>& inRewardItems);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIGS_MissionResultRewardItem> GetMoneyRewards() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIGS_MissionResultRewardItem> GetMissionRewards() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_MissionResult GetMissionResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAdditionalMissionDataByTag(FGameplayTag inTag) const;
    
    UFUNCTION(BlueprintCallable)
    void AddAnimation(UIGS_AnimatedWidget* inAnimatedWidget, UObject* inPayloadData);
    
};

