#pragma once
#include "CoreMinimal.h"
#include "EIGS_MenuTileSelectionType.h"
#include "GameplayTagContainer.h"
#include "IGS_Screen.h"
#include "Types/SlateEnums.h"
#include "IGS_MultiplayerJobCategoryRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_JobsScreen.generated.h"

class UHorizontalBox;
class UIGSScrollBox;
class UIGS_JobsScreenCategoryWidget;
class UIGS_MenuItemCategoryWidget;
class UIGS_MenuTileWidget;
class UIGS_Quickplay_JobManagerComponent;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UIGS_JobsScreen : public UIGS_Screen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* JobsCategoriesContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGSScrollBox* IGSScrollBoxWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollPaddingOnCategorySelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_JobsScreenCategoryWidget> CategoryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedCategoryIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowEndlessScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_JobsScreenCategoryWidget*> CategoryWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_MenuTileWidget> ItemWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_MenuTileSelectionType CategoryItemSelectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_JobsScreenCategoryWidget* RecomendedCategoryWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MultiplayerJobCategoryRow RecomendedCategoryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_Quickplay_JobManagerComponent* m_JobManager;
    
public:
    UIGS_JobsScreen();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateSeenDataInOtherCategories(UIGS_MenuItemCategoryWidget* inCategoryWidget, UIGS_MenuTileWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    void UpdateRecomendedCategory();
    
public:
    UFUNCTION(BlueprintCallable)
    void SelectCategory(int32 categoryIndex, bool autoscroll, bool setFocusOnFirstItem);
    
    UFUNCTION(BlueprintCallable)
    void ScrollToCategory(int32 categoryIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSelectCategory_NoScrollNoFocus(UIGS_MenuItemCategoryWidget* categoryWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectCategory_Internal(UIGS_MenuItemCategoryWidget* categoryWidget, int32 Direction);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJobScreenInitialized();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnJobItemSelected_Internal(UIGS_MenuTileWidget* jobWidget);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJobItemSelected(UIGS_MenuTileWidget* jobWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCategorySelected(int32 categoryIndex);
    
    UFUNCTION(BlueprintCallable)
    void InitializeJobScreen(const TArray<FIGS_MultiplayerJobCategoryRow>& inCategories);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleNavigationBetweenCategories(UIGS_MenuItemCategoryWidget* categoryWidget, EUINavigation inNavigation);
    
public:
    UFUNCTION(BlueprintCallable)
    void GoToCategory(int32 Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetWidgetByJobTag(FGameplayTag inTag, bool inIncludeRecomended) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_JobsScreenCategoryWidget* GetSelectedCategoryWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_JobsScreenCategoryWidget* GetCategoryByIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCategoriesCount();
    
    UFUNCTION(BlueprintCallable)
    void Close_Internal();
    
};

