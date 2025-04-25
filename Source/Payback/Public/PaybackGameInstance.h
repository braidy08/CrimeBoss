#pragma once
#include "CoreMinimal.h"
#include "IGS_GameInstanceFramework.h"
#include "IGS_TextChatEntry.h"
#include "IGS_LoginChangedAfterEASSignatureDelegate.h"
#include "PaybackGameInstance.generated.h"

class UPaybackCoreMapsData;

UCLASS(Blueprintable, NonTransient)
class PAYBACK_API UPaybackGameInstance : public UIGS_GameInstanceFramework {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LoginChangedAfterEASSignature OnLoginChangedAfterEAS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_TextChatEntry> TextChatHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChatHistoryLineLimit;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaybackCoreMapsData* CoreMapsData;
    
public:
    UPaybackGameInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void TriggerOnLoginChangedAfterEAS() const;
    
    UFUNCTION(BlueprintCallable)
    void SetUseEAS(bool inUseEAS);
    
    UFUNCTION(BlueprintCallable)
    void OnTextChatMessageSent(FText inMessage, const FString& inPlayerName, int32 inHeisterNum);
    
    UFUNCTION(BlueprintCallable)
    void OnLocalTextChatMessageSent(FText inMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideSession();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetUseEAS(bool& outUseEAS);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure=false)
    void FadeOutGame(const float inFadeTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure=false)
    void FadeInGame(const float inFadeTime) const;
    
};

