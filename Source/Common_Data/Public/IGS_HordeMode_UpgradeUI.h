#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "IGS_HordeMode_UpgradeUI.generated.h"

USTRUCT(BlueprintType)
struct FIGS_HordeMode_UpgradeUI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PickupText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText IconGlyph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor IconColor;
    
    COMMON_DATA_API FIGS_HordeMode_UpgradeUI();
};

