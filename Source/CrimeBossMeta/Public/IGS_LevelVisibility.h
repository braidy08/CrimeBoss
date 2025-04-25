#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_LevelVisibility.h"
#include "IGS_LevelVisibility.generated.h"

USTRUCT(BlueprintType)
struct FIGS_LevelVisibility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_LevelVisibility LevelVisibility;
    
    CRIMEBOSSMETA_API FIGS_LevelVisibility();
};

