#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EIGS_PlayerReportsCategory.h"
#include "IGS_ReportingManager.generated.h"

class APlayerState;
class UObject;

UCLASS(Blueprintable)
class COMMON_UTILS_API UIGS_ReportingManager : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_ReportingManager();

    UFUNCTION(BlueprintCallable)
    static void ReportPlayer(const UObject* inWCO, const APlayerState* inLocalPlayerState, const APlayerState* inReportedPlayerState, EIGS_PlayerReportsCategory inReason, const FString& inMessage);
    
};

