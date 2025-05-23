#include "IGS_JobsScreen.h"

UIGS_JobsScreen::UIGS_JobsScreen() {
    this->JobsCategoriesContent = NULL;
    this->IGSScrollBoxWidget = NULL;
    this->ScrollPaddingOnCategorySelect = 0.00f;
    this->CategoryWidgetClass = NULL;
    this->SelectedCategoryIndex = 0;
    this->AllowEndlessScroll = false;
    this->ItemWidgetClass = NULL;
    this->CategoryItemSelectionType = EIGS_MenuTileSelectionType::Basic;
    this->RecomendedCategoryWidget = NULL;
    this->m_JobManager = NULL;
}

void UIGS_JobsScreen::UpdateSeenDataInOtherCategories(UIGS_MenuItemCategoryWidget* inCategoryWidget, UIGS_MenuTileWidget* InWidget) {
}

void UIGS_JobsScreen::UpdateRecomendedCategory() {
}

void UIGS_JobsScreen::SelectCategory(int32 categoryIndex, bool autoscroll, bool setFocusOnFirstItem) {
}

void UIGS_JobsScreen::ScrollToCategory(int32 categoryIndex) {
}

void UIGS_JobsScreen::OnSelectCategory_NoScrollNoFocus(UIGS_MenuItemCategoryWidget* categoryWidget) {
}

void UIGS_JobsScreen::OnSelectCategory_Internal(UIGS_MenuItemCategoryWidget* categoryWidget, int32 Direction) {
}


void UIGS_JobsScreen::OnJobItemSelected_Internal(UIGS_MenuTileWidget* jobWidget) {
}



void UIGS_JobsScreen::InitializeJobScreen(const TArray<FIGS_MultiplayerJobCategoryRow>& inCategories) {
}

void UIGS_JobsScreen::HandleNavigationBetweenCategories(UIGS_MenuItemCategoryWidget* categoryWidget, EUINavigation inNavigation) {
}

void UIGS_JobsScreen::GoToCategory(int32 Direction) {
}

UUserWidget* UIGS_JobsScreen::GetWidgetByJobTag(FGameplayTag inTag, bool inIncludeRecomended) const {
    return NULL;
}

UIGS_JobsScreenCategoryWidget* UIGS_JobsScreen::GetSelectedCategoryWidget() const {
    return NULL;
}

UIGS_JobsScreenCategoryWidget* UIGS_JobsScreen::GetCategoryByIndex(int32 Index) {
    return NULL;
}

int32 UIGS_JobsScreen::GetCategoriesCount() {
    return 0;
}

void UIGS_JobsScreen::Close_Internal() {
}


