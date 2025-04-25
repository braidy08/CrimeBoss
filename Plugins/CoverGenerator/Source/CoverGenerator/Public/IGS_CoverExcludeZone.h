#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "IGS_CoverExcludeZone.generated.h"

UCLASS(Blueprintable)
class COVERGENERATOR_API AIGS_CoverExcludeZone : public AVolume {
    GENERATED_BODY()
public:
    AIGS_CoverExcludeZone(const FObjectInitializer& ObjectInitializer);

};

