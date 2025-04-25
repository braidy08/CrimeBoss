#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_EndScoreItemAnimationData.generated.h"

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UIGS_EndScoreItemAnimationData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FinalValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisplayDollars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisplayDollarsSign;
    
    UIGS_EndScoreItemAnimationData();

    UFUNCTION(BlueprintCallable)
    void SetData(int32 inInitValue, int32 inFinalValue, FText inTextFormat, float inDuration, bool inDisplayDollars, bool inDisplayDollarsSign);
    
};

