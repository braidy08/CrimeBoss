#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EIGS_LevelsVisibilityModifier.h"
#include "IGS_LevelVisibility.h"
#include "IGS_LevelVisibilityPresetTableRow.generated.h"

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FIGS_LevelVisibilityPresetTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_LevelsVisibilityModifier VisibilityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_LevelVisibility> LevelVisibilities;
    
    FIGS_LevelVisibilityPresetTableRow();
};

