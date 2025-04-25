#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_MeleeWeaponCategoryRow.h"
#include "IGS_MeleeWeaponCategoriesDatabase.generated.h"

class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_MeleeWeaponCategoriesDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_MeleeWeaponCategoriesDatabase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_MeleeWeaponCategoryRow GetCategoryByWeaponID(const UObject* inWCO, FGameplayTag inWeaponId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_MeleeWeaponCategoryRow GetCategoryByPreviewWeaponID(const UObject* inWCO, FGameplayTag inWeaponId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_MeleeWeaponCategoryRow GetCategory(const UObject* inWCO, FGameplayTag inID);
    
};

