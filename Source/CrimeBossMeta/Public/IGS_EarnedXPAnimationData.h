#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_DebriefAnimationSequenceData.h"
#include "IGS_EarnedXPAnimationData.generated.h"

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UIGS_EarnedXPAnimationData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NewLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NewProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBetweenAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisplayXPBadgeOnActiveEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_DebriefAnimationSequenceData> Sequences;
    
    UIGS_EarnedXPAnimationData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFinalPoints() const;
    
};

