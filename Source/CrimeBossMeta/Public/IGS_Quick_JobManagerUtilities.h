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

    UFUNCTION(BlueprintCallable)
    static void SavePendingNewChanges(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveJobCategoryFromPendingNew(const UObject* inWCO, const FGameplayTag inJobCategoryTag);
    
    UFUNCTION(BlueprintCallable)
    static bool IsJobCategoryPendingNew(const UObject* inWCO, const FGameplayTag inJobCategoryTag);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_Quick_JobManagerSaveData InitializeJobCategoriesStatistics(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetServerWorldTimeWithRTT(const UObject* inWCO);
    
};

