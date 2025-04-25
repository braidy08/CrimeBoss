#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "IGS_CameraSwitchEventDelegate.h"
#include "IGS_CameraSwitchManagerComponent.generated.h"

class AMETA_Camera;
class APlayerCameraManager;
class APlayerController;
class UAkAudioEvent;
class UDataTable;
class UIGS_LevelsVisibilityManagerComponent;
class UIGS_ScreenHandler;
class UMETA_LevelActorsManagerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_CameraSwitchManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SwitchCameraOnScreenOpen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CameraSwitchEvent OnCameraSwitchStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CameraSwitchEvent OnCameraSwitchFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CameraSwitchEvent OnViewTargetChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> FadeOutAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> FadeInAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBetweenDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CameraLevelsVisibilityTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMETA_Camera* m_CurrentCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_WaitingCameraTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_CurrentCameraTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCameraManager* m_PlayerCameraManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMETA_LevelActorsManagerComponent* m_LevelActorsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* m_LocalPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_LevelsVisibilityManagerComponent* m_LevelsVisibilityManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_ScreenHandler* m_ScreenHandler;
    
public:
    UIGS_CameraSwitchManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TrySwitchToCamera(const FGameplayTag inCameraTag, bool inFade);
    
private:
    UFUNCTION(BlueprintCallable)
    void SwitchToCamera_Internal(AMETA_Camera* inCamera, bool inFade);
    
    UFUNCTION(BlueprintCallable)
    void OnSwitchToCameraStarted_Internal(const FGameplayTag inCameraTag, bool inFade);
    
    UFUNCTION(BlueprintCallable)
    void OnSwitchToCameraFinished_Internal(const FGameplayTag inCameraTag);
    
    UFUNCTION(BlueprintCallable)
    void OnOpenScreenWithCameraTag_Internal(FGameplayTag inCameraTag);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelsShown_Internal();
    
    UFUNCTION(BlueprintCallable)
    void OnBlendToViewTargetFinished_Internal(const FGameplayTag inCameraTag, bool inFade);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCameraSwitchingInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCurrentCameraTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMETA_Camera* GetCurrentCamera() const;
    
};

