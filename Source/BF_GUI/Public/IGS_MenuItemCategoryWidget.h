#pragma once
#include "CoreMinimal.h"
#include "EIGS_MenuTileSelectionType.h"
#include "GameplayTagContainer.h"
#include "IGS_WidgetWithInput.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "Blueprint/WidgetNavigation.h"
#include "IGS_CategoryWidgetSeenDelegate.h"
#include "IGS_ItemConfirmedDelegate.h"
#include "IGS_ItemSelectedDelegate.h"
#include "IGS_MenuItemCategorySelectDelegate.h"
#include "IGS_MenuItemCategorySelectNoScrollNoFocusDelegate.h"
#include "IGS_NavigatedFromCategoryDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_MenuItemCategoryWidget.generated.h"

class UHorizontalBox;
class UIGS_MenuTileDataBase;
class UIGS_MenuTileWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_MenuItemCategoryWidget : public UIGS_WidgetWithInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* CategoryContentBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* EmptyTilesBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CategoryNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_MenuTileWidget> ItemWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_MenuTileWidget> EmptyItemWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_MenuTileSelectionType ItemsSelectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin TopFirstColumnItemMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin TopItemMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin BottomFirstColumnItemMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin BottomItemMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EmptyTilesOverallCount;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MenuItemCategorySelect OnCategorySelect;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MenuItemCategorySelectNoScrollNoFocus OnCategorySelectNoScrollNoFocus;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ItemSelected OnItemSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ItemConfirmed OnItemConfirmed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_NavigatedFromCategory OnNavigatedFromCategory;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CategoryWidgetSeen OnItemSeen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomWidgetNavigationDelegate OnNavigatedFromCategory_Internal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_MenuTileWidget*> ItemWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSelected;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_MenuTileWidget* LastSelectedWidget;
    
public:
    UIGS_MenuItemCategoryWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateItemSeenByTag(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable)
    void TrySetFocusToFirstWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetIsCategorySelected(bool inIsSelected);
    
    UFUNCTION(BlueprintCallable)
    void SelectLastTopWidget();
    
    UFUNCTION(BlueprintCallable)
    void ResetLastSelectedWidget();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnItemSelected_Internal(UIGS_MenuTileWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void OnItemSeen_Internal(UIGS_MenuTileWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void OnItemConfirmed_Internal(UIGS_MenuTileWidget* Widget);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCategorySelected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCategoryInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCategoryDeselected();
    
    UFUNCTION(BlueprintCallable)
    void InitCategory(FText Name, const TArray<UIGS_MenuTileDataBase*>& Items);
    
    UFUNCTION(BlueprintCallable)
    bool HasItemWithTag(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnNavigatedFromCategory(EUINavigation inNavigation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnItemSeen(UIGS_MenuTileWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_MenuTileWidget* GetFirstWidget() const;
    
    UFUNCTION(BlueprintCallable)
    void FocusLastSelectedWidget();
    
    UFUNCTION(BlueprintCallable)
    void DeselectOtherItems(UIGS_MenuTileWidget* inKeepSelected);
    
    UFUNCTION(BlueprintCallable)
    void DeselectAllItems();
    
};

