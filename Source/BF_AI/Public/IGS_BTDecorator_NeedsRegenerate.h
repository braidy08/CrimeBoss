#pragma once
#include "CoreMinimal.h"
#include "IGS_BTDecorator_Base.h"
#include "IGS_BTDecorator_NeedsRegenerate.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTDecorator_NeedsRegenerate : public UIGS_BTDecorator_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMustRegenerate;
    
    UIGS_BTDecorator_NeedsRegenerate();

};

