#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "EIGS_InventorySlot.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EIGS_UserDifficulty.h"
#include "EMETA_ItemQuality.h"
#include "EMETA_RespectLvl.h"
#include "META_FloatInterval.h"
#include "META_Interval.h"
#include "EIGS_ModType.h"
#include "META_AllowedEquipmentInfo.h"
#include "META_AllowedHeistersInBM_Config.h"
#include "META_AllowedWeaponsInfo.h"
#include "META_EquipmentArrayCached.h"
#include "META_EquipmentEconomyData.h"
#include "META_EquipmentPriceIntervalsPerQuality.h"
#include "META_EquipmentScopeKey.h"
#include "META_LootBagConfiguration.h"
#include "META_MissionAdditionalMonetaryValue.h"
#include "META_MissionMonetaryValue.h"
#include "META_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration.h"
#include "META_RandomizedWeaponData.h"
#include "META_RewardsAndProbabilitiesForMoneyMakingScenarios.h"
#include "META_WeaponEconomyData.h"
#include "META_WeaponScopeKey.h"
#include "META_WeaponsArrayCached.h"
#include "Templates/SubclassOf.h"
#include "IGS_EconomyData_Base.generated.h"

class UIGS_EquipmentInventoryObject;
class UIGS_MenuCommonData_Base;
class UMETA_Character;
class UMETA_MissionID;
class UMETA_WeaponInventoryObject;
class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_EconomyData_Base : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_ItemQuality, FMETA_WeaponEconomyData> SetupWeaponDataPerWeaponQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> BuyCostModifierByWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_ModType, int32> BuyCostModifierByWeaponAttachmens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_ItemQuality, FMETA_EquipmentPriceIntervalsPerQuality> SetupEquipmentDataPerEquipmentQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> BuyCostModifierByEquipmentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_ModType, int32> BuyCostModifierByEquipmentAttachmens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, FMETA_MissionMonetaryValue> MissionsCommonWealthConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UMETA_MissionID>, FMETA_MissionAdditionalMonetaryValue> MissionsAdditionalWealthConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration> MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultMoneyMakingScenariosProbabilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_ScenarioDifficulty, float> MissionRewardsMultiplierPerScenarioDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_UserDifficulty, float> MissionRewardsMultiplierPerCampaignDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StoryMissionRewardMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FailNassaraExpenses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NassaraExpensesFor1stStar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NassaraExpensesFor2stStar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NassaraExpensesFor3stStar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponCoefficientPriceForHeister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EquipmentCoefficientPriceForHeister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeisterMarketAvailableInDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeisterMarketCooldownInDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PriceMultiplierForFirstGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeistersAmountOverrideInFirstGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, FMETA_AllowedHeistersInBM_Config> AllowedHeistersPerRespectStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeistersPoolRefreshCostMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeistersPoolRefreshStartPriceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponMarketAvailableInDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponMarketCooldownInDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, FMETA_AllowedWeaponsInfo> AllowedWeaponsPerRespectStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, FMETA_AllowedEquipmentInfo> AllowedEquipmentPerRespectStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_ScenarioDifficulty, float> TotalLootBagsMultiplierPerDificulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> TotalLootBagsMultiplierPerNumberOfPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMETA_Interval> RangeBagsPerNumberOfPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_FloatInterval RandomBagSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_LootBagConfiguration> LootBagConfigurations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMETA_EquipmentEconomyData EquipmentEconomyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FMETA_WeaponScopeKey, FMETA_WeaponsArrayCached> WeaponsCachedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FMETA_EquipmentScopeKey, FMETA_EquipmentArrayCached> EquipmentCachedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIGS_MenuCommonData_Base* CommonData;
    
public:
    UIGS_EconomyData_Base();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateWeaponsCachedData(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    void UpdateEquipmentCachedData(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCachedData(const UObject* inWCO);
    
public:
    UFUNCTION(BlueprintCallable)
    bool TryToGenerateWeaponTypeForCharacter(const UObject* inWCO, const EIGS_InventorySlot inType, const EMETA_ItemQuality inCharacterQuality, const TArray<FGameplayTag>& inUnlockedWeapons, const TArray<UMETA_Character*>& inCurrentlyGeneratedCharacters, const TArray<UMETA_Character*>& inCrewCharacters, FMETA_RandomizedWeaponData& outRandomizedWeaponData);
    
    UFUNCTION(BlueprintCallable)
    bool TryToGenerateRandomEquipmentForCharacter(const UObject* inWCO, EMETA_ItemQuality inCharacterQuality, FGameplayTag inEquippedEquipment, const TArray<FGameplayTag>& inUnlockedEquipment, const TArray<UMETA_Character*>& inCurrentlyGeneratedCharacters, const TArray<UMETA_Character*>& inCrewCharacters, TSubclassOf<UIGS_EquipmentInventoryObject>& outEquipment);
    
    UFUNCTION(BlueprintCallable)
    bool TryGetCommonPerkLimitForCharacter(UObject* inWCO, const FGameplayTag inCharacterTag, const EMETA_ItemQuality inQuality, const int32 inLevel, int32& outLimit);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RefreshCommonData(const UObject* inWCO);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoneyMakingScenariosAdditionalWealthAndProbabilitiesContainData(FGameplayTag inFGameplayTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemUnlocked(TArray<FGameplayTag> inUnlockedPool, FGameplayTag inItemTag);
    
    UFUNCTION(BlueprintCallable)
    TArray<FGameplayTag> GetWeaponTagsByClassAndQuality(const UObject* inWCO, FGameplayTag inWeaponClass, EMETA_ItemQuality inQuality);
    
    UFUNCTION(BlueprintCallable)
    TArray<TSubclassOf<UMETA_WeaponInventoryObject>> GetWeaponsByClassAndQuality(const UObject* inWCO, FGameplayTag inWeaponClass, EMETA_ItemQuality inQuality, const TArray<TSubclassOf<UMETA_WeaponInventoryObject>>& inAlreadySelectedWeapons, const TArray<FGameplayTag>& inUnlockedWeapons, bool inIgnoreUnlock);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWeaponPrice(FGameplayTag inWeaponClassTag, EMETA_ItemQuality inWeaponQuality, const float inRelativePrice) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWeaponEconomyDataByQuality(EMETA_ItemQuality inWeaponQuality, FMETA_WeaponEconomyData& outEconomyData, bool& bSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStartingPerkCountOfCharacter(UObject* inWCO, const FGameplayTag inCharacter, const EMETA_ItemQuality inQuality);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStartingLevelOfCharacter(UObject* inWCO, const FGameplayTag inCharacter, const EMETA_ItemQuality inQuality);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_RewardsAndProbabilitiesForMoneyMakingScenarios GetMoneyMakingScenariosAdditionalWealthAndProbabilitiesData(const EMETA_RespectLvl inRespectLevel, const FGameplayTag inFGameplayTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMissionRewardMultiplierForScenarioDifficulty(EIGS_ScenarioDifficulty inDifficulty) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMissionRewardMultiplierForCampaignDifficulty(EIGS_UserDifficulty inDifficulty) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMissionObjectiveMonetaryValue(EMETA_RespectLvl inRespectLvl) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionMaxMonetaryValue(EMETA_RespectLvl inRespectLvl) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionAverageMonetaryValue(EMETA_RespectLvl inRespectLvl) const;
    
    UFUNCTION(BlueprintCallable)
    TMap<TSubclassOf<UMETA_MissionID>, FMETA_MissionAdditionalMonetaryValue> GetMissionAdditionalWealthMissions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxLevelOfCharacter(UObject* inWCO, const FGameplayTag inCharacter, const EMETA_ItemQuality inQuality);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEquipmentEconomyDataByQuality(EMETA_ItemQuality inEquipmentQuality, FMETA_EquipmentPriceIntervalsPerQuality& outEconomyData, bool& bSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_RewardsAndProbabilitiesForMoneyMakingScenarios GetDefaultScenarioWealthAndProbabilities() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDefaultProbabilitiesDataForCommonMissions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_MissionMonetaryValue GetCommonWealthOfMission(EMETA_RespectLvl inRespectLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBuyCostModifierByWeaponClass(FGameplayTag inWeaponClassTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMETA_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration> GetAllMoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration() const;
    
};

