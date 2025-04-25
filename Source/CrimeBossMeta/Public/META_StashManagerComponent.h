#pragma once
#include "CoreMinimal.h"
#include "META_WeaponAmountInfo.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "META_PawnShopTrendDataRuntime.h"
#include "IGS_StashManagerBaseComponent.h"
#include "META_LootChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "META_StashManagerComponent.generated.h"

class UIGS_EquipmentInventoryObject;
class UMETA_Equipment;
class UMETA_MissionID;
class UMETA_Weapon;
class UMETA_WeaponInventoryObject;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_StashManagerComponent : public UIGS_StashManagerBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_LootChanged OnLootChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_LootChanged OnLootSold;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_Equipment*> Equipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> Loot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponAmountInfo> Weapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLootValueWasSoldToPawnShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FMETA_PawnShopTrendDataRuntime> PawnShopTrends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastDayWhenWarehouseAttackStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceWarehouseAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMETA_MissionID> WarehouseAttackMissionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoneyWarehouseAttackWasRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> LootWarehouseattackWasRemoved;
    
public:
    UMETA_StashManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TryGetValidParentLootTag(FGameplayTag inLootTag, FGameplayTag& outMetaTag);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveEquipmentFromStashByObject(UMETA_Equipment* inEquipment);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetWeaponsFromStashByID(TSubclassOf<UMETA_WeaponInventoryObject> inWeaponId, UMETA_Weapon*& outWeaponsData, int32& outAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWarehouseAttackLosses(int32& outRemovedMoney, TMap<FGameplayTag, int32>& outRemovedLoot) const;
    
    UFUNCTION(BlueprintCallable)
    TMap<FGameplayTag, int32> GetSortedLoot(bool inAscSort);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetOwnedItems(TArray<UMETA_Weapon*>& outWeapons, TArray<UMETA_Equipment*>& outEquipment);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetEquippedItems(TArray<UMETA_Weapon*>& outWeapons, TArray<UMETA_Equipment*>& outEquipment);
    
    UFUNCTION(BlueprintCallable)
    void ChangeLootByValue(const FGameplayTag inLootTag, const int32 InValue, const bool inRawValue);
    
    UFUNCTION(BlueprintCallable)
    void AddEquipmentToStashByObject(UMETA_Equipment* inEquipment);
    
    UFUNCTION(BlueprintCallable)
    UMETA_Equipment* AddEquipmentToStashByID(TSubclassOf<UIGS_EquipmentInventoryObject> inEquipmentId);
    
};

