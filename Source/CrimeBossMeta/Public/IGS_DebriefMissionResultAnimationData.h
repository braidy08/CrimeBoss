#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_DebriefMissionResultAnimationData.generated.h"

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UIGS_DebriefMissionResultAnimationData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StarsRating;
    
    UIGS_DebriefMissionResultAnimationData();

    UFUNCTION(BlueprintCallable)
    void SetData(int32 inStarsRating);
    
};

