#include "IGS_GUIUtilityFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UIGS_GUIUtilityFunctionLibrary::UIGS_GUIUtilityFunctionLibrary() {
}

void UIGS_GUIUtilityFunctionLibrary::SetMousePositionInViewport(UObject* inWorldContextObject, int32 inX, int32 inY) {
}

void UIGS_GUIUtilityFunctionLibrary::SetMouseCursorToWidget(UCanvasPanelSlot* inSlot) {
}

FString UIGS_GUIUtilityFunctionLibrary::PasteTextFromClipboard() {
    return TEXT("");
}

TSubclassOf<UUserWidget> UIGS_GUIUtilityFunctionLibrary::GetWidgetForWorldWidgetType(UObject* inWCO, EIGS_WorldWidgetType inType) {
    return NULL;
}

FIGS_PrestigeLevelUIData UIGS_GUIUtilityFunctionLibrary::GetPrestigeLevelUIDataForLevel(int32 inLevel) {
    return FIGS_PrestigeLevelUIData{};
}

bool UIGS_GUIUtilityFunctionLibrary::GetInputActionKeySymbolForCurrentInputDevice(UObject* inWCO, EIGS_InputAction InAction, FName& OutText) {
    return false;
}

bool UIGS_GUIUtilityFunctionLibrary::GetInputActionKeySymbol(UObject* inWCO, EIGS_InputAction InAction, FName& OutText, EIGS_InputDevice inInputDevice) {
    return false;
}

FIGS_HordeMode_PerkRow UIGS_GUIUtilityFunctionLibrary::GetHordeModeUpgradeRowByEffect(TSubclassOf<UGameplayEffect> inEffectClass, const UDataTable* perks_table) {
    return FIGS_HordeMode_PerkRow{};
}

FIGS_HordeMode_UpgradeUI UIGS_GUIUtilityFunctionLibrary::GetHordeModePerkUpgradeUIData(const TSubclassOf<UGameplayEffect> inEffectClass, float inLevel, bool& outSuccess) {
    return FIGS_HordeMode_UpgradeUI{};
}

TArray<FIGS_HordeMode_UpgradeUI> UIGS_GUIUtilityFunctionLibrary::GetHordeModePerksUpgradeUIData(TMap<TSubclassOf<UGameplayEffect>, float>& inPerkUpgrades) {
    return TArray<FIGS_HordeMode_UpgradeUI>();
}

int32 UIGS_GUIUtilityFunctionLibrary::GetFirstPrestigeLevelTreshold() {
    return 0;
}

bool UIGS_GUIUtilityFunctionLibrary::GetAlternativeInputActionKeySymbol(UObject* inWCO, EIGS_InputAction InAction, FName& OutText, EIGS_InputDevice inInputDevice) {
    return false;
}

void UIGS_GUIUtilityFunctionLibrary::CopyTextToClipboard(const FString& InText) {
}


