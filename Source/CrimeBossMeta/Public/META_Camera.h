#pragma once
#include "CoreMinimal.h"
#include "CineCameraActor.h"
#include "GameplayTagContainer.h"
#include "META_Camera.generated.h"

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API AMETA_Camera : public ACineCameraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ID;
    
    AMETA_Camera(const FObjectInitializer& ObjectInitializer);

};

