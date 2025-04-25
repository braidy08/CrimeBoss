#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_ChainMissionItemAnimationData.generated.h"

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UIGS_ChainMissionItemAnimationData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StarsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MissionName;
    
    UIGS_ChainMissionItemAnimationData();

    UFUNCTION(BlueprintCallable)
    void SetData(int32 inStarsCount, FText inMissionName);
    
};

