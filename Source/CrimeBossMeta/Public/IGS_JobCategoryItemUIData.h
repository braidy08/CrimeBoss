#pragma once
#include "CoreMinimal.h"
#include "EIGS_MenuTileSize.h"
#include "IGS_MenuTileImageOffset.h"
#include "IGS_JobCategoryItemUIData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FIGS_JobCategoryItemUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MenuTileImageOffset ImageOffsetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_MenuTileSize TileSize;
    
    CRIMEBOSSMETA_API FIGS_JobCategoryItemUIData();
};

