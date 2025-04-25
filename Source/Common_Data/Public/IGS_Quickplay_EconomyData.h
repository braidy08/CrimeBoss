#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_ChainDifficulty.h"
#include "EIGS_ChainType.h"
#include "EIGS_UserDifficulty.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_UnlockCategory.h"
#include "IGS_EconomyData_Base.h"
#include "IGS_MultiplayerMoneyRewardSettings.h"
#include "IGS_UnlockItemCost.h"
#include "IGS_WeaponChainReward.h"
#include "Templates/SubclassOf.h"
#include "IGS_Quickplay_EconomyData.generated.h"

class UIGS_ChainContractID;

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_Quickplay_EconomyData : public UIGS_EconomyData_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartingCash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProgressResetCompensationMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_UserDifficulty, float> DifficultyBonusPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> HumanPlayersBonusPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MultiplayerMoneyRewardSettings MultiplayerMoneyRewardSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UIGS_ChainContractID>, float> ChainRewardMultipliersForContracts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StoryChainCompletionBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StoryChainPerfectionBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_ChainDifficulty, float> ShuffleCompletionBonuses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_ChainDifficulty, float> ShufflePerfectionBonuses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_ChainDifficulty, FIGS_WeaponChainReward> ChainWeaponsForDifficulties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseItemCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DigitsWithoutRounding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_UnlockCategory, FIGS_UnlockItemCost> CategoryCosts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseBossSlotCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BossSlotCategoryMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FreeBossSlotsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> BossSlotCostMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_ItemQuality, int32> HeisterLevelPerQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_ItemQuality, int32> CharacterStartingPerksPerQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> CharacterStartingPerksOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> HordeMode_Players_LootWeightMultiplier;
    
public:
    UIGS_Quickplay_EconomyData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStartingCash() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRewardMultiplierForChainContract(TSubclassOf<UIGS_ChainContractID> inChainContractID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRewardBonusPercentageForHumanPlayers(const int32 inAdditionalHumanPlayers) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRewardBonusPercentageForDifficulty(const EIGS_UserDifficulty inDifficulty) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPaidBossSlotsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_MultiplayerMoneyRewardSettings GetMultiplayerMoneyRewardSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxBossSlotsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFreeBossSlotsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharacterLevelPerQuality(EMETA_ItemQuality inQuality);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetChainCompletionBonusMultiplier(const EIGS_ChainType inChainType, const EIGS_ChainDifficulty inDifficulty, const int32 inLowestStarRating, float& outCompletionMultiplier, float& outPerfectionMultiplier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBossSlotPrice(int32 inSlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalculateItemCostFromCategoryAndQuality(const EIGS_UnlockCategory inItemCategory, const EMETA_ItemQuality inItemQuality, const float inRelativePrice) const;
    
};

