#pragma once
#include "CoreMinimal.h"
#include "IGS_Quick_JobManagerSaveData.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "IGS_Quick_JobManagerUtilities.generated.h"

class UObject;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UIGS_Quick_JobManagerUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_Quick_JobManagerUtilities();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
static void SavePendingNewChanges(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
static void RemoveJobCategoryFromPendingNew(const UObject* inWCO, const FGameplayTag inJobCategoryTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
static bool IsJobCategoryPendingNew(const UObject* inWCO, const FGameplayTag inJobCategoryTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
static FIGS_Quick_JobManagerSaveData InitializeJobCategoriesStatistics(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext=inWCO))
static float GetServerWorldTimeWithRTT(const UObject* inWCO);
    
};

