#pragma once
#include "CoreMinimal.h"
#include "EMETA_BlackmarketType.h"
#include "META_ArmyTierConfiguration.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EMETA_RespectLvl.h"
#include "IGS_BlackmarketManagerBaseComponent.h"
#include "META_BlackmarketManagerComponent.generated.h"

class UMETA_BaseObject;
class UMETA_Character;
class UMETA_Equipment;
class UMETA_PlotlineAsset;
class UMETA_Weapon;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_BlackmarketManagerComponent : public UIGS_BlackmarketManagerBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_Character*> UniqueHeistersPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_Character*> GenericHeistersPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_Weapon*> WeaponsPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_Equipment*> EquipmentPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_PlotlineAsset*> PlotlineAssetsPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GenericPrevID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DayWhenHeistersMarketBecameAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DayWhenWeaponsMarketBecameAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TemporaryLockedPlotlineAssetsTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfBoughtCheapHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RefreshWeaponsPoolCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RefreshHeistersPoolCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RefreshWeaponsPoolStartPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RefreshHeistersPoolStartPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseDayForHireArmyEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfGeneratedSoldiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_ArmyTierConfiguration ArmyHireEventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHireArmyEventClamped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> UnlockedCharacterTagIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> UnlockedWeaponTagIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> UnlockedWeaponSkinTagIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> UnlockedEquipmentTagIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> UnseenUnlockedCharacterTagIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> UnseenUnlockedWeaponTagIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> UnseenUnlockedEquipmentTagIDs;
    
public:
    UMETA_BlackmarketManagerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool TryGetRandomWeaponSkinForWeapon(const UMETA_Weapon* inWeapon, FGameplayTag& outWeaponSkin);
    
    UFUNCTION(BlueprintCallable)
    void SplitItemPool(const TArray<UMETA_BaseObject*>& inItems, TArray<UMETA_Weapon*>& outWeapons, TArray<UMETA_Equipment*>& outEquipment);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshBlackmarketItems(const EMETA_BlackmarketType inMarketType);
    
    UFUNCTION(BlueprintCallable)
    void RecalculateCharacterPricesInShop();
    
    UFUNCTION(BlueprintCallable)
    void ProcessUnseenUnlockedItemsFromQuickplay();
    
    UFUNCTION(BlueprintCallable)
    void ProcessHireArmyEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsWeaponBuyingUnlocked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHireArmyEventUnlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHireArmyEventActive() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePurchasedItemRemoval(UMETA_BaseObject* inItem);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetWeaponsPoolRefreshPrice() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UMETA_Character*> GetUniqueHeistersPoolForBlackmarket();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMETA_PlotlineAsset*> GetPlotlineAssetsPool() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextUniqueGenericID();
    
    UFUNCTION(BlueprintCallable)
    TSet<int32> GetManyUniqueGenericIDs(int32 inAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetHireArmyEventUnlockTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FMETA_ArmyTierConfiguration GetHireArmyEventData(bool& bActive) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetHeistersPoolRefreshPrice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMETA_Character*> GetGenericHeistersPool() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<UMETA_BaseObject*> GetCurrentBlackmarketPool();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCostOfSoldierForHire(EMETA_RespectLvl inRespect) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UMETA_BaseObject*> GetBlackmarketPool();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetAmountOfSoldiersCanBeBought(int32& outAvailableSoldiers, int32& outPurchasableSoldiers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmountOfGeneratedSoldiers() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UMETA_Character*> GenerateGenericCharactersForMarketPool(EMETA_RespectLvl inRespect, int32 inRequiredAmount, bool inIsFirstGeneration);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ForceWeaponsPoolRefresh();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ForceHeistersPoolRefresh();
    
protected:
    UFUNCTION(BlueprintCallable)
    UMETA_Weapon* DuplicateBlackmarketWeapon(const UMETA_Weapon* inSourceWeapon);
    
    UFUNCTION(BlueprintCallable)
    UMETA_Equipment* DuplicateBlackmarketEquipment(const UMETA_Equipment* inSourceEquipment);
    
    UFUNCTION(BlueprintCallable)
    UMETA_Weapon* CreateBlackmarketWeaponWithSkin(const FGameplayTag inWeaponTag, const FGameplayTag inSkinTag);
    
    UFUNCTION(BlueprintCallable)
    UMETA_Weapon* CreateBlackmarketWeapon(const FGameplayTag inWeaponTag);
    
    UFUNCTION(BlueprintCallable)
    UMETA_Equipment* CreateBlackmarketEquipment(const FGameplayTag inEquipmentTag);
    
    UFUNCTION(BlueprintCallable)
    void CheckHireArmyEventFinished();
    
    UFUNCTION(BlueprintCallable)
    int32 CalculateWeaponsPoolRefreshStartPrice();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalculateWeaponsPoolRefreshCost() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BuySoldiers(int32 inAmount, int32& outAmountOfSoldiersBought);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreCampaignWeaponSkinsEnabled() const;
    
};

