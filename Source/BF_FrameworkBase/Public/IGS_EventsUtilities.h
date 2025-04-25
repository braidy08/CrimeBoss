#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_EventsUtilities.generated.h"

class UIGS_EventBase;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_EventsUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_EventsUtilities();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetFullEventDescription(const UIGS_EventBase* inEvent, FText inDescription);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetFormattedRemainingTime(FTimespan inRemainingTime);
    
};

