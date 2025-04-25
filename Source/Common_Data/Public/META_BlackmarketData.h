#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EMETA_RespectLvl.h"
#include "META_Interval.h"
#include "META_BlackmarketDistribution.h"
#include "META_BlackmarketPriorityModifiers.h"
#include "META_BlackmarketData.generated.h"

UCLASS(Blueprintable)
class COMMON_DATA_API UMETA_BlackmarketData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval AmountOfNewUnseenWeaponsInShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval AmountOfNewUnseenEquipmentInShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval AmountOfNewUnseenCharactersInShop;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, FMETA_BlackmarketDistribution> ShopDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_BlackmarketPriorityModifiers Priorities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PriorityTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BasePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool KeepItemsInShopAfterPurchase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponPriceIncreaseForSubsequentPurchases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EquipmentPriceIncreaseForSubsequentPurchases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponRefreshStartPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponRefreshMultiplier;
    
public:
    UMETA_BlackmarketData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWeaponSkinLimitInShop(const EMETA_RespectLvl inRespect, int32& outLimit) const;
    
private:
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetItemGroupOptions() const;
    
};

