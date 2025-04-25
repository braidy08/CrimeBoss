#pragma once
#include "CoreMinimal.h"
#include "IGS_AnimationData.generated.h"

class UIGS_AnimatedWidget;
class UObject;

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FIGS_AnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_AnimatedWidget* AnimatedWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* AnimationData;
    
    FIGS_AnimationData();
};

