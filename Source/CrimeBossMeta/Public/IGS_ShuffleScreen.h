#pragma once
#include "CoreMinimal.h"
#include "EIGS_MenuTileSelectionType.h"
#include "IGS_Screen.h"
#include "Templates/SubclassOf.h"
#include "IGS_ShuffleScreen.generated.h"

class UIGS_MenuItemCategoryWidget;
class UIGS_MenuTileWidget;
class UIGS_Quickplay_ChainManagerComponent;
class UIGS_Quickplay_JobManagerComponent;

UCLASS(Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UIGS_ShuffleScreen : public UIGS_Screen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_MenuTileWidget> ItemWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_MenuTileSelectionType CategoryItemSelectionType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_MenuItemCategoryWidget* categoryWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_Quickplay_ChainManagerComponent* m_ChainManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_Quickplay_JobManagerComponent* m_JobManager;
    
public:
    UIGS_ShuffleScreen();

    UFUNCTION(BlueprintCallable)
    void Open_Internal();
    
private:
    UFUNCTION(BlueprintCallable)
    void InitData() const;
    
};

