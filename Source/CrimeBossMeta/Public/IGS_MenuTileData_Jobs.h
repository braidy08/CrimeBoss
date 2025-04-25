#pragma once
#include "CoreMinimal.h"
#include "IGS_MenuTileDataBase.h"
#include "IGS_MultiplayerJobCategoryItemRow.h"
#include "IGS_MenuTileData_Jobs.generated.h"

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UIGS_MenuTileData_Jobs : public UIGS_MenuTileDataBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MultiplayerJobCategoryItemRow Data;
    
public:
    UIGS_MenuTileData_Jobs();

    UFUNCTION(BlueprintCallable)
    void SetData(const FIGS_MultiplayerJobCategoryItemRow& inData);
    
    UFUNCTION(BlueprintCallable)
    FIGS_MultiplayerJobCategoryItemRow GetData();
    
};

