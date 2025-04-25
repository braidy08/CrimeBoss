#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_MenuTileDataBase.h"
#include "IGS_PlotlineSelectionDefinition.h"
#include "IGS_MenuTileData_PlotlineSelector.generated.h"

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_MenuTileData_PlotlineSelector : public UIGS_MenuTileDataBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PlotlineSelectionDefinition Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUnlocked;
    
public:
    UIGS_MenuTileData_PlotlineSelector();

    UFUNCTION(BlueprintCallable)
    void SetIsUnlocked(const bool inUnlocked);
    
    UFUNCTION(BlueprintCallable)
    void SetData(const FIGS_PlotlineSelectionDefinition& inData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetUnlockCriteriaTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLockedMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsUnlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPlotline() const;
    
    UFUNCTION(BlueprintCallable)
    FIGS_PlotlineSelectionDefinition GetData();
    
};

