#include "IGS_Screen.h"

UIGS_Screen::UIGS_Screen() {
    this->ScreenZOrder = EScreenZOrder::Normal;
    this->ScreenModifier = EScreenModifier::None;
    this->BaseScreenModifier = 0;
    this->ScreenInputMode = EScreenInputMode::UIOnly;
    this->InputPass = EScreenInputPass::NoPass;
    this->SupressSystemMenuOpen = false;
    this->InputDelay = 0.50f;
    this->refreshFocusAfterClose = true;
    this->RemoveFromParentAfterClose = false;
    this->CallOnOpenAfterClosePreviousScreen = true;
    this->IsOverlay = false;
    this->m_ScreenHandler = NULL;
}

void UIGS_Screen::RefreshFocus_Implementation() {
}







bool UIGS_Screen::IsThisScreenOnTop() const {
    return false;
}

bool UIGS_Screen::GoBack_Implementation() {
    return false;
}

FText UIGS_Screen::GetTitleOverride_Implementation() const {
    return FText::GetEmpty();
}

FGameplayTag UIGS_Screen::GetCameraTag_Implementation() const {
    return FGameplayTag{};
}

void UIGS_Screen::Close() {
}

void UIGS_Screen::AddScreenToViewport() {
}


