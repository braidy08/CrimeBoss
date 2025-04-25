#pragma once
#include "CoreMinimal.h"
#include "IGS_Widget.h"
#include "Types/SlateEnums.h"
#include "IGS_TextInputWithVirtualKeyboard.generated.h"

class UEditableTextBox;
class UMultiLineEditableText;

UCLASS(Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UIGS_TextInputWithVirtualKeyboard : public UIGS_Widget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* TextBoxInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMultiLineEditableText* MultilineBoxInput;
    
public:
    UIGS_TextInputWithVirtualKeyboard();

    UFUNCTION(BlueprintCallable)
    void ShowVirtualKeyboard();
    
    UFUNCTION(BlueprintCallable)
    void SetInputFocus();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTextCommited(const FText& InText, TEnumAsByte<ETextCommit::Type> inCommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void OnTextChanged(const FText& InText);
    
public:
    UFUNCTION(BlueprintCallable)
    void HideVirtualKeyboard();
    
    UFUNCTION(BlueprintCallable)
    void ClearText();
    
};

