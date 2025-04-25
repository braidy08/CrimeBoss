#pragma once
#include "CoreMinimal.h"
#include "IGS_BlockedPlayerHolder.generated.h"

USTRUCT(BlueprintType)
struct FIGS_BlockedPlayerHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProductUserID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    COMMON_UTILS_API FIGS_BlockedPlayerHolder();
};

