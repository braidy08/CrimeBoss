#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_EventItemTableRow.h"
#include "IGS_EventItems.generated.h"

class UObject;

UCLASS(Blueprintable)
class COMMON_UTILS_API UIGS_EventItems : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_EventItems();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEventItemVisibleByID(UObject* inWCO, const FGameplayTag inItemID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEventItemVisible(const UObject* inWCO, const FIGS_EventItemTableRow& inEventItem);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEventItemActiveByID(UObject* inWCO, const FGameplayTag inItemID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEventItemActive(const UObject* inWCO, const FIGS_EventItemTableRow& inEventItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventItem(const FGameplayTag inTagID) const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<FIGS_EventItemTableRow> GetVisibleItems(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_EventItemTableRow GetEventItemData(UObject* inWCO, const FGameplayTag inItemID, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FIGS_EventItemTableRow> GetActiveItems(UObject* inWCO);
    
};

