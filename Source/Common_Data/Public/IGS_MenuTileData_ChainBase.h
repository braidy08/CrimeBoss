#pragma once
#include "CoreMinimal.h"
#include "EIGS_ChainDifficulty.h"
#include "EIGS_ChainType.h"
#include "IGS_ChainMission.h"
#include "IGS_MenuTileDataBase.h"
#include "IGS_MenuTileData_ChainBase.generated.h"

UCLASS(Abstract, Blueprintable)
class COMMON_DATA_API UIGS_MenuTileData_ChainBase : public UIGS_MenuTileDataBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ChainMission Data;
    
public:
    UIGS_MenuTileData_ChainBase();

    UFUNCTION(BlueprintCallable)
    void SetData(const FIGS_ChainMission& inData);
    
    UFUNCTION(BlueprintCallable)
    EIGS_ChainType GetType();
    
    UFUNCTION(BlueprintCallable)
    EIGS_ChainDifficulty GetDifficulty();
    
    UFUNCTION(BlueprintCallable)
    FIGS_ChainMission GetData();
    
};

