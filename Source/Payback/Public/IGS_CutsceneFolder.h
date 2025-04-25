#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_CutsceneFolderPropData.h"
#include "IGS_CutsceneFolder.generated.h"

UCLASS(Blueprintable)
class PAYBACK_API AIGS_CutsceneFolder : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CoverText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SubjectText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HueShift;
    
    AIGS_CutsceneFolder(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitleText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSubjectText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHue(const float& inHue);
    
    UFUNCTION(BlueprintCallable)
    void SetData(const FIGS_CutsceneFolderPropData& inData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Initialize(const FIGS_CutsceneFolderPropData& inData);
    
};

