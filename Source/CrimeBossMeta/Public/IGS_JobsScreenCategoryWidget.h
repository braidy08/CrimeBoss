#pragma once
#include "CoreMinimal.h"
#include "IGS_MenuItemCategoryWidget.h"
#include "EIGS_MenuTileSelectionType.h"
#include "IGS_MultiplayerJobCategoryRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_JobsScreenCategoryWidget.generated.h"

class UIGS_MenuTileDataBase;
class UIGS_MenuTileWidget;
class UIGS_Quickplay_JobManagerComponent;
class UMETA_HordeModeMission;

UCLASS(Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UIGS_JobsScreenCategoryWidget : public UIGS_MenuItemCategoryWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIGS_MenuTileDataBase*> JobDataObjects;
    
    UIGS_JobsScreenCategoryWidget();

    UFUNCTION(BlueprintCallable)
    void InitJobCategory(const FIGS_MultiplayerJobCategoryRow& categoryData, EIGS_MenuTileSelectionType inCategoryItemSelectionType, TSubclassOf<UIGS_MenuTileWidget> inItemWidgetClass, UIGS_Quickplay_JobManagerComponent* inJobManager);
    
    UFUNCTION(BlueprintCallable)
    void InitHordeJobCategory(const FIGS_MultiplayerJobCategoryRow& categoryData, const TArray<UMETA_HordeModeMission*>& inBestJobs, EIGS_MenuTileSelectionType inCategoryItemSelectionType, TSubclassOf<UIGS_MenuTileWidget> inItemWidgetClass);
    
};

