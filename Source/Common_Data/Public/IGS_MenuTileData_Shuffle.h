#pragma once
#include "CoreMinimal.h"
#include "IGS_MenuTileData_ChainBase.h"
#include "IGS_MenuTileData_Shuffle.generated.h"

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_MenuTileData_Shuffle : public UIGS_MenuTileData_ChainBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActiveShuffle;
    
public:
    UIGS_MenuTileData_Shuffle();

    UFUNCTION(BlueprintCallable)
    void SetIsActiveShuffle(bool inIsActive);
    
    UFUNCTION(BlueprintCallable)
    bool IsActiveShuffle();
    
};

