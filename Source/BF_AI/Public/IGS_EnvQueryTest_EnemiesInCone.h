#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "IGS_EnvQueryTest_EnemiesInCone.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_EnvQueryTest_EnemiesInCone : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceMultiplier;
    
    UIGS_EnvQueryTest_EnemiesInCone();

};

