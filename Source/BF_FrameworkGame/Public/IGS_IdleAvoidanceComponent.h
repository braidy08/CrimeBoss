#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_IdleAvoidanceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_IdleAvoidanceComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityTreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceWeihgtOverride;
    
public:
    UIGS_IdleAvoidanceComponent(const FObjectInitializer& ObjectInitializer);

};

