#pragma once
#include "CoreMinimal.h"
#include "IGS_TextInputWithVirtualKeyboard.h"
#include "IGS_LobbyCodeWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UIGS_LobbyCodeWidget : public UIGS_TextInputWithVirtualKeyboard {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCodeLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LobbyCode;
    
    UIGS_LobbyCodeWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SetMaxCodeLength(int32 inMaxLength);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RebuildChars();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCodeTextChanged(const TArray<FString>& inChars);
    
};

