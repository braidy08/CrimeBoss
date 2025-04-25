#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_PrestigeLevelUIData.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FIGS_PrestigeLevelUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialInstance;
    
    BF_FRAMEWORKGAME_API FIGS_PrestigeLevelUIData();
};

