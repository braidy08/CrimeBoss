#pragma once
#include "CoreMinimal.h"
#include "IGS_UnlockItemInfo.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "MeleeWeaponUtilities.generated.h"

class UObject;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMeleeWeaponUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMeleeWeaponUtilities();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext=inWCO))
static TArray<FIGS_UnlockItemInfo> GetMeleeWeaponsByCategory(UObject* inWCO, const FGameplayTag inPreviewWeaponID, const TArray<FIGS_UnlockItemInfo>& inUnlockItems);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext=inWCO))
static TArray<FIGS_UnlockItemInfo> GetAllMelleWeaponFamiliesByCategories(UObject* inWCO, const TArray<FIGS_UnlockItemInfo>& inAllMeleeWeapons, bool inIncludeWithoutCategory);
    
};

