#pragma once
#include "CoreMinimal.h"
#include "IGS_PerksTableRow.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "IGS_PerkGroup.h"
#include "IGS_PerksUtilities.generated.h"

class UMETA_Perk;
class UObject;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UIGS_PerksUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_PerksUtilities();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
static void RemovePerksGroupFromNewPending(UObject* inWCO, const FGameplayTag inPerkTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext=inWCO))
static int32 GetUnlockedPerkGroupsCount(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext=inWCO))
static int32 GetUnlockablePerkGroupsCount(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext=inWCO))
static TArray<UMETA_Perk*> GetPerksOnFirstLevel(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_PerkGroup GetPerkGroupByPerkTag(const FGameplayTag inTag, UPARAM(Ref) TArray<FIGS_PerkGroup>& inPerkGroups);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext=inWCO))
static TArray<FIGS_PerkGroup> GetAllPerksGroups(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext=inWCO))
static UMETA_Perk* CreatePerkObject(UObject* inWCO, FIGS_PerksTableRow inPerkRow);
    
};

