#pragma once
#include "CoreMinimal.h"
#include "IGS_MeleeDeathAnimationsSet.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FIGS_MeleeDeathAnimationsSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> RightDeathAnimationMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> LeftDeathAnimationMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> UpDeathAnimationMontages;
    
    BF_ANIMATIONS_API FIGS_MeleeDeathAnimationsSet();
};

