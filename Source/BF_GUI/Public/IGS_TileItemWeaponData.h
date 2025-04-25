#pragma once
#include "CoreMinimal.h"
#include "IGS_WeaponModeUIData.h"
#include "ETileComparisonUIData.h"
#include "IGS_TileItemData.h"
#include "IGS_TileItemWeaponData.generated.h"

UCLASS(Blueprintable)
class BF_GUI_API UIGS_TileItemWeaponData : public UIGS_TileItemData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETileComparisonUIData m_ComparisonUIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_WeaponModeUIData> m_ModsUIData;
    
public:
    UIGS_TileItemWeaponData();

    UFUNCTION(BlueprintCallable)
    void SetModsUIData(TArray<FIGS_WeaponModeUIData> inModsUIData);
    
    UFUNCTION(BlueprintCallable)
    void SetComparisonData(ETileComparisonUIData inComparisonUIData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIGS_WeaponModeUIData> GetModsUIData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETileComparisonUIData GetComparisonData() const;
    
};

