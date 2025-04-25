#pragma once
#include "CoreMinimal.h"
#include "IGS_WeakSpotReference.generated.h"

class UIGS_ObjectStatus;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKBASE_API FIGS_WeakSpotReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> WeakSpotComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ObjectStatus* WeakSpotObjectStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    FIGS_WeakSpotReference();
};

