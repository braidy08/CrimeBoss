#pragma once
#include "CoreMinimal.h"
#include "IGS_ReadFileCompletedDelegateHandle.generated.h"

USTRUCT(BlueprintType)
struct FIGS_ReadFileCompletedDelegateHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    COMMON_UTILS_API FIGS_ReadFileCompletedDelegateHandle();
};

