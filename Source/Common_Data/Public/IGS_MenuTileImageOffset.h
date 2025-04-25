#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_MenuTileImageOffset.generated.h"

USTRUCT(BlueprintType)
struct FIGS_MenuTileImageOffset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleX;
    
    COMMON_DATA_API FIGS_MenuTileImageOffset();
};

