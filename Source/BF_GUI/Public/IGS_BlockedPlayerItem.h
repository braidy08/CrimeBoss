#pragma once
#include "CoreMinimal.h"
#include "IGS_BlockedPlayerHolder.h"
#include "UObject/Object.h"
#include "IGS_BlockedPlayerItem.generated.h"

UCLASS(Blueprintable)
class BF_GUI_API UIGS_BlockedPlayerItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_BlockedPlayerHolder BlockedPlayerHolder;
    
    UIGS_BlockedPlayerItem();

};

