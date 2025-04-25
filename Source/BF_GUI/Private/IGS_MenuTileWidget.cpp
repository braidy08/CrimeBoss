#include "IGS_MenuTileWidget.h"

UIGS_MenuTileWidget::UIGS_MenuTileWidget() {
    this->BackgroundImageMaterialParent = NULL;
    this->SelectionType = EIGS_MenuTileSelectionType::Basic;
    this->HoldTime = 1.00f;
    this->HoldTicksPerSecond = 60;
    this->SizeSpacer = NULL;
    this->SelectionLabel = NULL;
    this->HoldBorder = NULL;
    this->BackgroundImage = NULL;
    this->BackgroundImageMaterial = NULL;
    this->ItemData = NULL;
}

void UIGS_MenuTileWidget::SetSelectionType(EIGS_MenuTileSelectionType inType) {
}

void UIGS_MenuTileWidget::SetItemData(UIGS_MenuTileDataBase* inItemData) {
}

void UIGS_MenuTileWidget::SetIsItemSelected(bool inIsSelected) {
}

void UIGS_MenuTileWidget::SetIsHoldForceDisabled(bool inHoldForceDisabled) {
}

void UIGS_MenuTileWidget::RefreshSizeSpacer() {
}




void UIGS_MenuTileWidget::OnHoldStarted() {
}



void UIGS_MenuTileWidget::OnHoldCancelled() {
}

FEventReply UIGS_MenuTileWidget::OnHoldBorderMouseButtonUp(FGeometry InMyGeometry, const FPointerEvent& InMouseEvent) {
    return FEventReply{};
}

FEventReply UIGS_MenuTileWidget::OnHoldBorderMouseButtonDown(FGeometry Geometry, const FPointerEvent& PointerEvent) {
    return FEventReply{};
}


void UIGS_MenuTileWidget::InitVisuals_Implementation() {
}

void UIGS_MenuTileWidget::InitMaterials() {
}

void UIGS_MenuTileWidget::HandleReleasedKeyboard() {
}

void UIGS_MenuTileWidget::HandlePressedKeyboard() {
}

void UIGS_MenuTileWidget::HandleHoldTick() {
}

void UIGS_MenuTileWidget::HandleHoldFinished() {
}

EIGS_MenuTileSize UIGS_MenuTileWidget::GetTileSize() const {
    return EIGS_MenuTileSize::FullSize;
}

float UIGS_MenuTileWidget::GetTextureAspectRatio(UTexture2D* inTexture) {
    return 0.0f;
}

EIGS_MenuTileSelectionType UIGS_MenuTileWidget::GetSelectionType() const {
    return EIGS_MenuTileSelectionType::Basic;
}

UIGS_MenuTileDataBase* UIGS_MenuTileWidget::GetItemData() {
    return NULL;
}

bool UIGS_MenuTileWidget::GetIsItemSelected() const {
    return false;
}


