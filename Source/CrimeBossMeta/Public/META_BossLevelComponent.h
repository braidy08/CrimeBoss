#pragma once
#include "CoreMinimal.h"
#include "META_PerkData.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_RespectLvl.h"
#include "IGS_BossLevelBaseComponent.h"
#include "META_BossLevelComponent.generated.h"

class UMETA_BossLevelData;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_BossLevelComponent : public UIGS_BossLevelBaseComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_BossPointsChanged, float, NewPoints);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_BossPointsChanged OnBossPointsChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMETA_BossLevelData* BossLevelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfPrimaryWeaponsIssued;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfAdditionalEquipmentIssued;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocalBossPointAfterAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviousLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviousPoints;
    
public:
    UMETA_BossLevelComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetBossLevel(const int32 inNewBossLevel, const float inLeftoverPoints);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMaxBossLevel();
    
    UFUNCTION(BlueprintCallable)
    void GetLevelFromAddedBossPoints(const float inBossPoints, int32& outNewLevel, float& outLeftoverPoints, float& outTotalPointsToNextLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetCampaignProgressReductionMultiplier();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBossPointMultiplier();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculateBossPointsWithMultipliers(const float inBossPoints);
    
    UFUNCTION(BlueprintCallable)
    float CalculateBossPointsFromScore(const int32 inBaseScore);
    
    UFUNCTION(BlueprintCallable)
    float CalculateBossPointsFromRespect(const EMETA_RespectLvl inOriginalRespect, const EMETA_RespectLvl inNewRespect);
    
    UFUNCTION(BlueprintCallable)
    TArray<FMETA_PerkData> CalculateBossPerksByBossLevel(EIGS_CharacterID inBossID, FGameplayTag inBossTagID, int32 inBossLevel, UPARAM(Ref) TArray<FMETA_PerkData>& inCurrentPerks);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BuyItem(FGameplayTag ItemTag, FGameplayTag screenTag, FGameplayTag SkinTag);
    
    UFUNCTION(BlueprintCallable)
    void AddBossPoints(const float inChangeBy, const bool inWithMultipliers);
    
};

