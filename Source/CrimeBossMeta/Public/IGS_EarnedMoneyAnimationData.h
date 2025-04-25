#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_DebriefAnimationSequenceData.h"
#include "IGS_EarnedMoneyAnimationData.generated.h"

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UIGS_EarnedMoneyAnimationData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBetweenAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_DebriefAnimationSequenceData> Sequences;
    
    UIGS_EarnedMoneyAnimationData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFinalValue() const;
    
};

