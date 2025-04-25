#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputAction.h"
#include "EIGS_InputCategory.h"
#include "IGS_InputData.generated.h"

USTRUCT(BlueprintType)
struct FIGS_InputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_InputAction InputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_InputCategory Category;
    
    BF_FRAMEWORKGAME_API FIGS_InputData();
};

