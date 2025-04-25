#pragma once
#include "CoreMinimal.h"
#include "EIGS_LevelCategory.h"
#include "EIGS_LevelVisibility.h"
#include "IGS_LevelData.generated.h"

class ULevelStreaming;

USTRUCT(BlueprintType)
struct FIGS_LevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ULevelStreaming> LevelStreaming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_LevelVisibility Visibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_LevelVisibility DefaultVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_LevelCategory LevelCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UnloadOnHide;
    
    CRIMEBOSSMETA_API FIGS_LevelData();
};

