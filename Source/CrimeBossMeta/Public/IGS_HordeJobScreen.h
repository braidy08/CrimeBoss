#pragma once
#include "CoreMinimal.h"
#include "EIGS_MenuTileSelectionType.h"
#include "IGS_Screen.h"
#include "IGS_MultiplayerJobCategoryItemRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_HordeJobScreen.generated.h"

class UIGS_JobsScreenCategoryWidget;
class UIGS_MenuTileWidget;
class UIGS_MultiplayerJobsDatabase;
class UIGS_Quickplay_JobManagerComponent;
class UMETA_HordeModeMission;

UCLASS(Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UIGS_HordeJobScreen : public UIGS_Screen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_MenuTileWidget> ItemWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_MenuTileSelectionType CategoryItemSelectionType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_JobsScreenCategoryWidget* categoryWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_MultiplayerJobsDatabase* m_JobsDatabase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_Quickplay_JobManagerComponent* m_JobManager;
    
public:
    UIGS_HordeJobScreen();

    UFUNCTION(BlueprintCallable)
    void Open_Internal();
    
private:
    UFUNCTION(BlueprintCallable)
    void InitData() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UMETA_HordeModeMission*> GetBestJobsForScenarios(TArray<FIGS_MultiplayerJobCategoryItemRow> inScenarios) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void Close_Internal();
    
};

