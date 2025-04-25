#pragma once
#include "CoreMinimal.h"
#include "IGS_WaypointFramework.h"
#include "UObject/NoExportTypes.h"
#include "IGS_RecoveryPoint.generated.h"

class ANavigationData;

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_RecoveryPoint : public AIGS_WaypointFramework {
    GENERATED_BODY()
public:
    AIGS_RecoveryPoint(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnNavigationBuildFinished(ANavigationData* inNavData);
    
public:
    UFUNCTION(BlueprintCallable)
    FVector GetRecoveryPosition() const;
    
};

