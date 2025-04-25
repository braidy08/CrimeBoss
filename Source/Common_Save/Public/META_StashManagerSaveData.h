#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_EquipmentSaveData.h"
#include "META_PawnShopTrendDataRuntime.h"
#include "META_WeaponSaveDataArray.h"
#include "Templates/SubclassOf.h"
#include "META_StashManagerSaveData.generated.h"

class UMETA_MissionID;
class UMETA_WeaponInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_StashManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveDataArray> WeaponsStash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMETA_EquipmentSaveData> Equipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> Loot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CurrentLootValueWasSoldToPawnShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FMETA_PawnShopTrendDataRuntime> PawnShopTrends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 LastDayWhenWarehouseAttackStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ChanceWarehouseAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMETA_MissionID> WarehouseAttackMissionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> LootForWarehouseAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 MoneyForWarehouseAttack;
    
    FMETA_StashManagerSaveData();
};

