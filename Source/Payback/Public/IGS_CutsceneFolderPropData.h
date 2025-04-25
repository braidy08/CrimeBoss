#pragma once
#include "CoreMinimal.h"
#include "IGS_CutsceneFolderPropData.generated.h"

USTRUCT(BlueprintType)
struct PAYBACK_API FIGS_CutsceneFolderPropData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CoverText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SubjectText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HueShift;
    
    FIGS_CutsceneFolderPropData();
};

