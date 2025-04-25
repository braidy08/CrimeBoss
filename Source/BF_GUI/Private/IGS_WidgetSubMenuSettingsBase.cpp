#include "IGS_WidgetSubMenuSettingsBase.h"

UIGS_WidgetSubMenuSettingsBase::UIGS_WidgetSubMenuSettingsBase() {
    this->m_LastFocusedWidget = NULL;
}

void UIGS_WidgetSubMenuSettingsBase::SetDirty() {
}

void UIGS_WidgetSubMenuSettingsBase::RevertToDefaults() {
}





void UIGS_WidgetSubMenuSettingsBase::OnButtonFocused(UIGS_WidgetButtonSimple* inButton) {
}


void UIGS_WidgetSubMenuSettingsBase::InitLastFocusedWidget(UUserWidget* InWidget) {
}

UUserWidget* UIGS_WidgetSubMenuSettingsBase::GetLastFocusedWidget() {
    return NULL;
}



