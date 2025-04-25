#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_ProgressionUtilities.generated.h"

class UCurveTable;
class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_ProgressionUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_ProgressionUtilities();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMPMoneyRewardValue(UObject* inWCO, const int32 inLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxCurveTableValue(const UCurveTable* inCurveTable);
    
};

