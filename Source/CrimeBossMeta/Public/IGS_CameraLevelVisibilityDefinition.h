#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_CameraLevelVisibilityDefinition.generated.h"

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FIGS_CameraLevelVisibilityDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle LevelVisibilityPreset;
    
    FIGS_CameraLevelVisibilityDefinition();
};

