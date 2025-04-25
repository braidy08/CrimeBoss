#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_PlayerHealthList.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_PlayerHealthList : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UIGS_PlayerHealthList();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostPlayerListChanged();
    
    UFUNCTION(BlueprintCallable)
    void ForcePlayerListRefresh();
    
};

