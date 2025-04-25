#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_DefenderAntiPushData.generated.h"

class UIGS_ThrowableInventoryObject;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_DefenderAntiPushData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UIGS_ThrowableInventoryObject> Throwable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval Cooldown;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval Range;
    
    FIGS_DefenderAntiPushData();
};

