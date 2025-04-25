#include "META_BlackmarketManagerComponent.h"

UMETA_BlackmarketManagerComponent::UMETA_BlackmarketManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GenericPrevID = 0;
    this->DayWhenHeistersMarketBecameAvailable = 0;
    this->DayWhenWeaponsMarketBecameAvailable = 0;
    this->AmountOfBoughtCheapHeisters = 0;
    this->RefreshWeaponsPoolCounter = 0;
    this->RefreshHeistersPoolCounter = 0;
    this->RefreshWeaponsPoolStartPrice = 0;
    this->RefreshHeistersPoolStartPrice = 0;
    this->BaseDayForHireArmyEvent = 0;
    this->AmountOfGeneratedSoldiers = 0;
    this->IsHireArmyEventClamped = false;
}

bool UMETA_BlackmarketManagerComponent::TryGetRandomWeaponSkinForWeapon(const UMETA_Weapon* inWeapon, FGameplayTag& outWeaponSkin) {
    return false;
}

void UMETA_BlackmarketManagerComponent::SplitItemPool(const TArray<UMETA_BaseObject*>& inItems, TArray<UMETA_Weapon*>& outWeapons, TArray<UMETA_Equipment*>& outEquipment) {
}

void UMETA_BlackmarketManagerComponent::RefreshBlackmarketItems_Implementation(const EMETA_BlackmarketType inMarketType) {
}

void UMETA_BlackmarketManagerComponent::RecalculateCharacterPricesInShop() {
}

void UMETA_BlackmarketManagerComponent::ProcessUnseenUnlockedItemsFromQuickplay() {
}

void UMETA_BlackmarketManagerComponent::ProcessHireArmyEvent() {
}


bool UMETA_BlackmarketManagerComponent::IsHireArmyEventUnlocked() const {
    return false;
}

bool UMETA_BlackmarketManagerComponent::IsHireArmyEventActive() const {
    return false;
}

void UMETA_BlackmarketManagerComponent::HandlePurchasedItemRemoval(UMETA_BaseObject* inItem) {
}

int32 UMETA_BlackmarketManagerComponent::GetWeaponsPoolRefreshPrice_Implementation() const {
    return 0;
}

TArray<UMETA_Character*> UMETA_BlackmarketManagerComponent::GetUniqueHeistersPoolForBlackmarket() {
    return TArray<UMETA_Character*>();
}

TArray<UMETA_PlotlineAsset*> UMETA_BlackmarketManagerComponent::GetPlotlineAssetsPool() const {
    return TArray<UMETA_PlotlineAsset*>();
}

int32 UMETA_BlackmarketManagerComponent::GetNextUniqueGenericID() {
    return 0;
}

TSet<int32> UMETA_BlackmarketManagerComponent::GetManyUniqueGenericIDs(int32 inAmount) {
    return TSet<int32>();
}

FGameplayTag UMETA_BlackmarketManagerComponent::GetHireArmyEventUnlockTag() const {
    return FGameplayTag{};
}

FMETA_ArmyTierConfiguration UMETA_BlackmarketManagerComponent::GetHireArmyEventData_Implementation(bool& bActive) const {
    return FMETA_ArmyTierConfiguration{};
}

int32 UMETA_BlackmarketManagerComponent::GetHeistersPoolRefreshPrice_Implementation() const {
    return 0;
}

TArray<UMETA_Character*> UMETA_BlackmarketManagerComponent::GetGenericHeistersPool() const {
    return TArray<UMETA_Character*>();
}

TArray<UMETA_BaseObject*> UMETA_BlackmarketManagerComponent::GetCurrentBlackmarketPool() {
    return TArray<UMETA_BaseObject*>();
}

int32 UMETA_BlackmarketManagerComponent::GetCostOfSoldierForHire(EMETA_RespectLvl inRespect) const {
    return 0;
}

TArray<UMETA_BaseObject*> UMETA_BlackmarketManagerComponent::GetBlackmarketPool() {
    return TArray<UMETA_BaseObject*>();
}

void UMETA_BlackmarketManagerComponent::GetAmountOfSoldiersCanBeBought_Implementation(int32& outAvailableSoldiers, int32& outPurchasableSoldiers) {
}

int32 UMETA_BlackmarketManagerComponent::GetAmountOfGeneratedSoldiers() const {
    return 0;
}

TArray<UMETA_Character*> UMETA_BlackmarketManagerComponent::GenerateGenericCharactersForMarketPool(EMETA_RespectLvl inRespect, int32 inRequiredAmount, bool inIsFirstGeneration) {
    return TArray<UMETA_Character*>();
}

bool UMETA_BlackmarketManagerComponent::ForceWeaponsPoolRefresh_Implementation() {
    return false;
}

bool UMETA_BlackmarketManagerComponent::ForceHeistersPoolRefresh_Implementation() {
    return false;
}

UMETA_Weapon* UMETA_BlackmarketManagerComponent::DuplicateBlackmarketWeapon(const UMETA_Weapon* inSourceWeapon) {
    return NULL;
}

UMETA_Equipment* UMETA_BlackmarketManagerComponent::DuplicateBlackmarketEquipment(const UMETA_Equipment* inSourceEquipment) {
    return NULL;
}

UMETA_Weapon* UMETA_BlackmarketManagerComponent::CreateBlackmarketWeaponWithSkin(const FGameplayTag inWeaponTag, const FGameplayTag inSkinTag) {
    return NULL;
}

UMETA_Weapon* UMETA_BlackmarketManagerComponent::CreateBlackmarketWeapon(const FGameplayTag inWeaponTag) {
    return NULL;
}

UMETA_Equipment* UMETA_BlackmarketManagerComponent::CreateBlackmarketEquipment(const FGameplayTag inEquipmentTag) {
    return NULL;
}

void UMETA_BlackmarketManagerComponent::CheckHireArmyEventFinished() {
}

int32 UMETA_BlackmarketManagerComponent::CalculateWeaponsPoolRefreshStartPrice() {
    return 0;
}

int32 UMETA_BlackmarketManagerComponent::CalculateWeaponsPoolRefreshCost() const {
    return 0;
}

void UMETA_BlackmarketManagerComponent::BuySoldiers_Implementation(int32 inAmount, int32& outAmountOfSoldiersBought) {
}

bool UMETA_BlackmarketManagerComponent::AreCampaignWeaponSkinsEnabled() const {
    return false;
}


