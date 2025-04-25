#include "IGS_MenuItemCategoryWidget.h"

UIGS_MenuItemCategoryWidget::UIGS_MenuItemCategoryWidget() {
    this->CategoryContentBox = NULL;
    this->EmptyTilesBox = NULL;
    this->CategoryNameText = NULL;
    this->ItemWidgetClass = NULL;
    this->EmptyItemWidgetClass = NULL;
    this->ItemsSelectionType = EIGS_MenuTileSelectionType::Basic;
    this->EmptyTilesOverallCount = 0;
    this->isSelected = false;
    this->LastSelectedWidget = NULL;
}

void UIGS_MenuItemCategoryWidget::UpdateItemSeenByTag(FGameplayTag inTag) {
}

void UIGS_MenuItemCategoryWidget::TrySetFocusToFirstWidget() {
}

void UIGS_MenuItemCategoryWidget::SetIsCategorySelected(bool inIsSelected) {
}

void UIGS_MenuItemCategoryWidget::SelectLastTopWidget() {
}

void UIGS_MenuItemCategoryWidget::ResetLastSelectedWidget() {
}

void UIGS_MenuItemCategoryWidget::OnItemSelected_Internal(UIGS_MenuTileWidget* Widget) {
}

void UIGS_MenuItemCategoryWidget::OnItemSeen_Internal(UIGS_MenuTileWidget* Widget) {
}

void UIGS_MenuItemCategoryWidget::OnItemConfirmed_Internal(UIGS_MenuTileWidget* Widget) {
}




void UIGS_MenuItemCategoryWidget::InitCategory(FText Name, const TArray<UIGS_MenuTileDataBase*>& Items) {
}

bool UIGS_MenuItemCategoryWidget::HasItemWithTag(FGameplayTag inTag) {
    return false;
}

void UIGS_MenuItemCategoryWidget::HandleOnNavigatedFromCategory(EUINavigation inNavigation) {
}


UIGS_MenuTileWidget* UIGS_MenuItemCategoryWidget::GetFirstWidget() const {
    return NULL;
}

void UIGS_MenuItemCategoryWidget::FocusLastSelectedWidget() {
}

void UIGS_MenuItemCategoryWidget::DeselectOtherItems(UIGS_MenuTileWidget* inKeepSelected) {
}

void UIGS_MenuItemCategoryWidget::DeselectAllItems() {
}


