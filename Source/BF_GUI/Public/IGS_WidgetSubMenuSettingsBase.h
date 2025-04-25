#pragma once
#include "CoreMinimal.h"
#include "IGS_SettingsValueChangedEventDelegate.h"
#include "IGS_WidgetSubMenuBase.h"
#include "IGS_WidgetSubMenuSettingsBase.generated.h"

class UIGS_WidgetButtonSimple;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WidgetSubMenuSettingsBase : public UIGS_WidgetSubMenuBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_SettingsValueChangedEvent OnSettingsValueChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* m_LastFocusedWidget;
    
public:
    UIGS_WidgetSubMenuSettingsBase();

    UFUNCTION(BlueprintCallable)
    void SetDirty();
    
    UFUNCTION(BlueprintCallable)
    void RevertToDefaults();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSwitchedTo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRevertToDefaults();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRevert();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnButtonFocused(UIGS_WidgetButtonSimple* inButton);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApply();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitLastFocusedWidget(UUserWidget* InWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetLastFocusedWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetFocusableWidgets(TArray<UWidget*>& FocusableWidgets);
    
};

