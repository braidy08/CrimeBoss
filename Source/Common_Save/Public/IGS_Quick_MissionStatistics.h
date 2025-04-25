#pragma once
#include "CoreMinimal.h"
#include "IGS_Quick_MissionStatistics.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_Quick_MissionStatistics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 PlayCount;
    
    FIGS_Quick_MissionStatistics();
};

