#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EIGS_UserDifficulty.h"
#include "EMETA_AIBossStrengthChangeIntensity.h"
#include "EMETA_ArmyTier.h"
#include "EMETA_BossEliminationReward.h"
#include "EMETA_ItemQuality.h"
#include "EMETA_RespectLvl.h"
#include "EMETA_TileReward.h"
#include "EMETA_TileWealth.h"
#include "EMETA_TurfActionAfterSuccess.h"
#include "META_EconomyGraphVariableModeData.h"
#include "META_FloatInterval.h"
#include "META_HeisterEliminationReward.h"
#include "META_Interval.h"
#include "META_WeaponEliminationReward.h"
#include "META_WeaponTurfReward.h"
#include "EIGS_ModType.h"
#include "IGS_EconomyData_Base.h"
#include "META_AllowedWeaponsInfo.h"
#include "META_ArmyTierConfiguration.h"
#include "META_BossCharacterConfiguration.h"
#include "META_BossEliminationRewardsDistribution.h"
#include "META_CampaignCostMultipliers.h"
#include "META_CategoryEconomyVariable.h"
#include "META_CharacterGenerationWeight.h"
#include "META_GenericCharacterConfiguration.h"
#include "META_HeisterDataByTier.h"
#include "META_HeisterEconomyData.h"
#include "META_HeisterPerksDataByLevel.h"
#include "META_LevelUpHeisterData.h"
#include "META_Loan.h"
#include "META_Loans.h"
#include "META_MissionAdditionalMonetaryValue.h"
#include "META_TurfRewardsDistribution.h"
#include "META_UniqueCharacterConfiguration.h"
#include "META_UniqueCharacterCostsData.h"
#include "META_WarehouseWealthData.h"
#include "Templates/SubclassOf.h"
#include "META_EconomyData.generated.h"

class UIGS_GameplayEffect_PerkBase;
class UMETA_MissionID;
class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UMETA_EconomyData : public UIGS_EconomyData_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_UserDifficulty, FMETA_CampaignCostMultipliers> CostsMultipliersPerCampaignDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HireArmyEventUnlockTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_ArmyTier, FMETA_ArmyTierConfiguration> ArmyTiersConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_FloatInterval DefenceLostPenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, float> TileRespectMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceForTileIncomeToBeLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrequencyOfIncomeValueRecompute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_TileWealth, FMETA_FloatInterval> TurfIncomeMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_TileReward, int32> TurfRewardChances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_TileWealth, FMETA_TurfRewardsDistribution> TurfRewardsDistributionConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval SoldiersPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_FloatInterval LootMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_FloatInterval CashMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_WeaponTurfReward WeaponReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_WeaponTurfReward WeaponRewardForRepeatedCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RewardValueReductionMultiplierForRepeatedCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, float> DefaultPlanningCostMultiplierForWeakenMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlanningCostMultiplierForConqueringMultipleTurfs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_TurfActionAfterSuccess, float> PlanningCostMultiplierPerWeakenAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_AIBossStrengthChangeIntensity, float> PlanningCostMultiplierPerWeaknessIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlanningCostMultiplierForLastTurfWeakening;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, FMETA_Loans> Loans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DaysForRehabilitationAfterBankruptValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BankruptValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMETA_CategoryEconomyVariable> GraphEconomyCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfBuyableAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_ItemQuality, FMETA_GenericCharacterConfiguration> GenericCharacterConfigurationPerQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_ItemQuality, FMETA_UniqueCharacterConfiguration> UniqueCharacterConfigurationPerQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FMETA_UniqueCharacterConfiguration> UniqueCharacterConfigurationOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_UniqueCharacterCostsData BasicUniqueCharacterCosts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_CharacterID, FMETA_UniqueCharacterCostsData> UniqueCharacterCostsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_BossCharacterConfiguration BossCharacterConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultCharacterGenerationWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_CharacterGenerationWeight> CharacterGenerationWeightMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_CharacterID, FMETA_HeisterDataByTier> SetupHeisterDataPerGenericCharacterAndQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_CharacterID, FMETA_HeisterPerksDataByLevel> SetupHeisterPerksPerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval MissionsCutForUniqueCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_CharacterID, FMETA_Interval> MissionsCutOverrideForUniqueCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> ForbiddenPerksForFirstHeisterGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> ForbiddenPerksForGenericHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMETA_LevelUpHeisterData> LevelUpGenericHeisterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMETA_LevelUpHeisterData> LevelUpUniqueHeisterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMETA_LevelUpHeisterData> LevelUpBossData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> ForbiddenPerksForUpgrade;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_ItemQuality, float> WeaponSkinChancePerQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ForbiddenWeaponSkins;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WarehouseAttackCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, FMETA_WarehouseWealthData> WarehouseWealthPerRespect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, FMETA_Interval> PercentageBeStolenFromStash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartingChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DailyChanceIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinAmountOfEachLootCanBeStolen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_BossEliminationReward, int32> EliminationRewardChances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_BossEliminationRewardsDistribution EliminationRewardsDistributionConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval SoldiersPercentageForElimination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_FloatInterval LootMultiplierForElimination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_FloatInterval CashMultiplierForElimination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_WeaponEliminationReward WeaponRewardForElimination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_HeisterEliminationReward HeisterRewardForElimination;
    
public:
    UMETA_EconomyData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeaponQualityAllowedOnRespect(const EMETA_RespectLvl inRespect, const EMETA_ItemQuality inQuality, const bool inAllowLower, const int32 inChanceThreshold);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_WeaponTurfReward GetWeaponTurfRewardForRepeatedCapture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_WeaponTurfReward GetWeaponTurfReward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeaponSkinChancePerQuality(const EMETA_ItemQuality inWeaponQuality) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_WeaponEliminationReward GetWeaponRewardForElimination() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWeaponMarketCooldownInDays() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWeaponMarketAvailableInDays() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeaponCoefficientPriceForHeister() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeakenMissionPlanningCostMultiplier(EMETA_TurfActionAfterSuccess inTurfAction, EMETA_RespectLvl inRespect, EMETA_AIBossStrengthChangeIntensity inIntensity, bool inIsLastTurf, bool inLeavesIsolatedTiles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EMETA_RespectLvl, FMETA_WarehouseWealthData> GetWarehouseWealthPerRespect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWarehouseAttackCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUniqueCharacterMissionCut(EIGS_CharacterID inCharacterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUniqueCharacterConfiguration(const UObject* inWCO, FGameplayTag inCharacter, FMETA_UniqueCharacterConfiguration& outConfig) const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_TurfRewardsDistribution GetTurfRewardsDistributionConfig(EMETA_TileWealth inWealth);
    
    UFUNCTION(BlueprintCallable)
    TMap<EMETA_TileReward, int32> GetTurfRewardChances();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_FloatInterval GetTurfIncomeMultiplier(EMETA_TileWealth inTileWealth) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EMETA_RespectLvl, float> GetTileRespectMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStoryMissionRewardMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStartingChance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_Interval GetSoldiersPercentageForTurfReward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_Interval GetSoldiersPercentageForElimination() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRewardValueReductionMultiplierForRepeatedCapture() const;
    
    UFUNCTION(BlueprintCallable)
    void GetRandomizedUniqueCharacterCostsData(const UObject* inWCO, EIGS_CharacterID inCharacterID, EMETA_ItemQuality inCharacterQuality, int32& outBaseUpkeepCost, int32& outBaseHireCost);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_ItemQuality GetRandomizedQualityAccordingToPlayerRespect(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    EMETA_ItemQuality GetRandomHeisterQualityForGenericHeister(EMETA_RespectLvl inRespect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPriceMultiplierForFirstHeistersGeneration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EMETA_RespectLvl, FMETA_Interval> GetPercentageBeStolenFromStash() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfBuyableAssets() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetNassaraConversionCost(int32 inCountOfStars, EMETA_RespectLvl inRespectLvl);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMultiplierOfExpensesForMissionsWithoutIntel(EMETA_RespectLvl inRespectLvl) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMultiplierOfExpensesForMissionsWithIntel(EMETA_RespectLvl inRespectLvl) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMultiplierOfExpensesForBigHeist(EMETA_RespectLvl inRespectLvl) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMissionBonusRewardForBoss() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinAmountOfEachLootCanBeStolen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_FloatInterval GetLootMultiplierForTurfReward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_FloatInterval GetLootMultiplierForElimination() const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_LevelUpHeisterData GetLevelUpUniqueHeisterData(int32 inCharacterLevel);
    
    UFUNCTION(BlueprintCallable)
    FMETA_LevelUpHeisterData GetLevelUpGenericHeisterData(int32 inCharacterLevel);
    
    UFUNCTION(BlueprintCallable)
    FMETA_LevelUpHeisterData GetLevelUpBossData(int32 inCharacterLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetHireArmyEventUnlockTag() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetHeistersPoolRefreshStartPrice(EMETA_RespectLvl inRespectLvl);
    
    UFUNCTION(BlueprintCallable)
    float GetHeistersPoolRefreshMultipier();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHeistersAmountOverrideInFirstGeneration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_HeisterEliminationReward GetHeisterRewardForElimination() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHeisterMarketCooldownInDays() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHeisterMarketAvailableInDays() const;
    
    UFUNCTION(BlueprintCallable)
    void GetGraphEconomyVariableByTag(FGameplayTag inVariableTag, FMETA_EconomyGraphVariableModeData& outData, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGenericHeisterEconomyData(EIGS_CharacterID inGenericCharacterID, EMETA_ItemQuality inCharacterQuality, FMETA_HeisterEconomyData& outEconomyData, bool& bSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGenericCharacterConfiguration(EMETA_ItemQuality inQuality, FMETA_GenericCharacterConfiguration& outConfig) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFrequencyOfIncomeValueRecompute() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> GetForbiddenPerksForUpgrade() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> GetForbiddenPerksForGenericHeisters() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> GetForbiddenPerksForFirstHeisterGeneration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEquipmentCoefficientPriceForHeister() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_FloatInterval GetDefenceLostPenaltyInterval() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultCharacterGenerationWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDaysForRehabilitationAfterBankruptValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDailyChanceIncrease() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_CampaignCostMultipliers GetCostsMultipliersForCampaignDifficulty(EIGS_UserDifficulty inDifficulty) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGameplayTag, float> GetCharacterGenerationWeights() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChanceForTileIncomeToBeLoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_FloatInterval GetCashMultiplierForTurfReward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_FloatInterval GetCashMultiplierForElimination() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBuyCostModifierByWeaponAttachmens(TArray<EIGS_ModType> inMods) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_BossEliminationRewardsDistribution GetBossEliminationRewardsDistribution() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EMETA_BossEliminationReward, int32> GetBossEliminationRewardChances() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_BossCharacterConfiguration GetBossCharacterConfiguration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBankruptValue() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FMETA_Loan> GetAvailableLoansByRespect(EMETA_RespectLvl inRespectLvl);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetArmyTierData(EMETA_ArmyTier inTier, FMETA_ArmyTierConfiguration& OutInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmountOfPromotionPerksForUniqueCharacters() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmountOfPromotionEquipmentsForUniqueCharacters() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EIGS_CharacterID> GetAllSuitableGenericCharacterIdsByCharacterQuality(EMETA_ItemQuality inCharacterQuality, const TArray<EIGS_CharacterID>& inForbiddenCharacterIDs) const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_AllowedWeaponsInfo GetAllowedWeaponsByRespect(const EMETA_RespectLvl inRespect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EMETA_ItemQuality> GetAllowedHeistersForRespectLvl(EMETA_RespectLvl inCurrentRespectLvl) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAllowedHeistersAmountForRespectLvl(EMETA_RespectLvl inCurrentRespectLvl) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_MissionAdditionalMonetaryValue GetAdditionalWealthOfMission(const TSubclassOf<UMETA_MissionID>& inMission) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void DoesHaveAdditionalWealthConfig(const TSubclassOf<UMETA_MissionID>& inMission, bool& bHasAdditionalWealthConfig) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalculateArmyUpkeepCost(EMETA_ArmyTier inTier, int32 inSoldiersAmount, int32& outArmyUpkeepCost) const;
    
    UFUNCTION(BlueprintCallable)
    void CalculateArmyCostForDefense(const UObject* inWCO, EMETA_ArmyTier inTier, int32 inSoldiersAmount, int32& outArmyCost);
    
    UFUNCTION(BlueprintCallable)
    void CalculateArmyCostForAttack(const UObject* inWCO, EMETA_ArmyTier inTier, int32 inSoldiersAmount, int32& outArmyCost);
    
};

