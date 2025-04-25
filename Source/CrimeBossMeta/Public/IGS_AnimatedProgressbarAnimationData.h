#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_AnimatedProgressbarAnimationData.generated.h"

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UIGS_AnimatedProgressbarAnimationData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NewProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisplayParticles;
    
    UIGS_AnimatedProgressbarAnimationData();

    UFUNCTION(BlueprintCallable)
    void SetData(float inNewProgress, float inDuration, bool inDisplayParticles);
    
};

