#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "IGS_CutsceneCharacterKey.h"
#include "Templates/SubclassOf.h"
#include "IGS_CutsceneSubsystemDataAsset.generated.h"

class AIGS_CharacterPaperDoll;
class AIGS_CutsceneFolder;
class UAkAudioEvent;
class UAkStateValue;
class UWorld;

UCLASS(Blueprintable)
class PAYBACK_API UIGS_CutsceneSubsystemDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIGS_CutsceneCharacterKey, TSoftClassPtr<AIGS_CharacterPaperDoll>> CharactersPaperdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* CutsceneAkState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* NoMusicAkState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* NoSoundAkState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* NoCutsceneAkState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* ResetEnvironmentAkState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CustomMusicStopAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AIGS_CutsceneFolder> CutsceneFolderProp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UWorld>, FTransform> CutsceneFolderDefaultTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> CutsceneFolderHuePresets;
    
    UIGS_CutsceneSubsystemDataAsset();

};

