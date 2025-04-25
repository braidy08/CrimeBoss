#include "IGS_EconomyData_Base.h"
#include "Templates/SubclassOf.h"

UIGS_EconomyData_Base::UIGS_EconomyData_Base() {
    this->DefaultMoneyMakingScenariosProbabilities = 0;
    this->StoryMissionRewardMultiplier = 1.50f;
    this->FailNassaraExpenses = 0;
    this->NassaraExpensesFor1stStar = 0;
    this->NassaraExpensesFor2stStar = 0;
    this->NassaraExpensesFor3stStar = 0;
    this->WeaponCoefficientPriceForHeister = 1.00f;
    this->EquipmentCoefficientPriceForHeister = 1.00f;
    this->HeisterMarketAvailableInDays = 1;
    this->HeisterMarketCooldownInDays = 0;
    this->PriceMultiplierForFirstGeneration = 1.00f;
    this->HeistersAmountOverrideInFirstGeneration = 0;
    this->HeistersPoolRefreshCostMultiplier = 0.00f;
    this->HeistersPoolRefreshStartPriceMultiplier = 1.00f;
    this->WeaponMarketAvailableInDays = 1;
    this->WeaponMarketCooldownInDays = 0;
    this->CommonData = NULL;
}

void UIGS_EconomyData_Base::UpdateWeaponsCachedData(const UObject* inWCO) {
}

void UIGS_EconomyData_Base::UpdateEquipmentCachedData(const UObject* inWCO) {
}

void UIGS_EconomyData_Base::UpdateCachedData(const UObject* inWCO) {
}

bool UIGS_EconomyData_Base::TryToGenerateWeaponTypeForCharacter(const UObject* inWCO, const EIGS_InventorySlot inType, const EMETA_ItemQuality inCharacterQuality, const TArray<FGameplayTag>& inUnlockedWeapons, const TArray<UMETA_Character*>& inCurrentlyGeneratedCharacters, const TArray<UMETA_Character*>& inCrewCharacters, FMETA_RandomizedWeaponData& outRandomizedWeaponData) {
    return false;
}

bool UIGS_EconomyData_Base::TryToGenerateRandomEquipmentForCharacter(const UObject* inWCO, EMETA_ItemQuality inCharacterQuality, FGameplayTag inEquippedEquipment, const TArray<FGameplayTag>& inUnlockedEquipment, const TArray<UMETA_Character*>& inCurrentlyGeneratedCharacters, const TArray<UMETA_Character*>& inCrewCharacters, TSubclassOf<UIGS_EquipmentInventoryObject>& outEquipment) {
    return false;
}

bool UIGS_EconomyData_Base::TryGetCommonPerkLimitForCharacter(UObject* inWCO, const FGameplayTag inCharacterTag, const EMETA_ItemQuality inQuality, const int32 inLevel, int32& outLimit) {
    return false;
}

void UIGS_EconomyData_Base::RefreshCommonData(const UObject* inWCO) {
}

bool UIGS_EconomyData_Base::IsMoneyMakingScenariosAdditionalWealthAndProbabilitiesContainData(FGameplayTag inFGameplayTag) const {
    return false;
}

bool UIGS_EconomyData_Base::IsItemUnlocked(TArray<FGameplayTag> inUnlockedPool, FGameplayTag inItemTag) {
    return false;
}

TArray<FGameplayTag> UIGS_EconomyData_Base::GetWeaponTagsByClassAndQuality(const UObject* inWCO, FGameplayTag inWeaponClass, EMETA_ItemQuality inQuality) {
    return TArray<FGameplayTag>();
}

TArray<TSubclassOf<UMETA_WeaponInventoryObject>> UIGS_EconomyData_Base::GetWeaponsByClassAndQuality(const UObject* inWCO, FGameplayTag inWeaponClass, EMETA_ItemQuality inQuality, const TArray<TSubclassOf<UMETA_WeaponInventoryObject>>& inAlreadySelectedWeapons, const TArray<FGameplayTag>& inUnlockedWeapons, bool inIgnoreUnlock) {
    return TArray<TSubclassOf<UMETA_WeaponInventoryObject>>();
}

int32 UIGS_EconomyData_Base::GetWeaponPrice(FGameplayTag inWeaponClassTag, EMETA_ItemQuality inWeaponQuality, const float inRelativePrice) const {
    return 0;
}

void UIGS_EconomyData_Base::GetWeaponEconomyDataByQuality(EMETA_ItemQuality inWeaponQuality, FMETA_WeaponEconomyData& outEconomyData, bool& bSuccess) const {
}

int32 UIGS_EconomyData_Base::GetStartingPerkCountOfCharacter(UObject* inWCO, const FGameplayTag inCharacter, const EMETA_ItemQuality inQuality) {
    return 0;
}

int32 UIGS_EconomyData_Base::GetStartingLevelOfCharacter(UObject* inWCO, const FGameplayTag inCharacter, const EMETA_ItemQuality inQuality) {
    return 0;
}

FMETA_RewardsAndProbabilitiesForMoneyMakingScenarios UIGS_EconomyData_Base::GetMoneyMakingScenariosAdditionalWealthAndProbabilitiesData(const EMETA_RespectLvl inRespectLevel, const FGameplayTag inFGameplayTag) const {
    return FMETA_RewardsAndProbabilitiesForMoneyMakingScenarios{};
}

float UIGS_EconomyData_Base::GetMissionRewardMultiplierForScenarioDifficulty(EIGS_ScenarioDifficulty inDifficulty) const {
    return 0.0f;
}

float UIGS_EconomyData_Base::GetMissionRewardMultiplierForCampaignDifficulty(EIGS_UserDifficulty inDifficulty) const {
    return 0.0f;
}

float UIGS_EconomyData_Base::GetMissionObjectiveMonetaryValue(EMETA_RespectLvl inRespectLvl) const {
    return 0.0f;
}

int32 UIGS_EconomyData_Base::GetMissionMaxMonetaryValue(EMETA_RespectLvl inRespectLvl) const {
    return 0;
}

int32 UIGS_EconomyData_Base::GetMissionAverageMonetaryValue(EMETA_RespectLvl inRespectLvl) const {
    return 0;
}

TMap<TSubclassOf<UMETA_MissionID>, FMETA_MissionAdditionalMonetaryValue> UIGS_EconomyData_Base::GetMissionAdditionalWealthMissions() {
    return TMap<TSubclassOf<UMETA_MissionID>, FMETA_MissionAdditionalMonetaryValue>();
}

int32 UIGS_EconomyData_Base::GetMaxLevelOfCharacter(UObject* inWCO, const FGameplayTag inCharacter, const EMETA_ItemQuality inQuality) {
    return 0;
}

void UIGS_EconomyData_Base::GetEquipmentEconomyDataByQuality(EMETA_ItemQuality inEquipmentQuality, FMETA_EquipmentPriceIntervalsPerQuality& outEconomyData, bool& bSuccess) const {
}

FMETA_RewardsAndProbabilitiesForMoneyMakingScenarios UIGS_EconomyData_Base::GetDefaultScenarioWealthAndProbabilities() const {
    return FMETA_RewardsAndProbabilitiesForMoneyMakingScenarios{};
}

int32 UIGS_EconomyData_Base::GetDefaultProbabilitiesDataForCommonMissions() const {
    return 0;
}

FMETA_MissionMonetaryValue UIGS_EconomyData_Base::GetCommonWealthOfMission(EMETA_RespectLvl inRespectLevel) const {
    return FMETA_MissionMonetaryValue{};
}

float UIGS_EconomyData_Base::GetBuyCostModifierByWeaponClass(FGameplayTag inWeaponClassTag) const {
    return 0.0f;
}

TArray<FMETA_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration> UIGS_EconomyData_Base::GetAllMoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration() const {
    return TArray<FMETA_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration>();
}


