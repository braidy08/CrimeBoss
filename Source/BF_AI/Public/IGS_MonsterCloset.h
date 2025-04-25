#pragma once
#include "CoreMinimal.h"
#include "IGS_AITransitionObjectBase.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "IGS_MonsterCloset.generated.h"

class AActor;
class AIGS_AIEnemyGroupSpawner;
class AIGS_GameCharacterBase;
class AIGS_ScriptPoint;
class ATriggerBase;
class UBoxComponent;

UCLASS(Blueprintable)
class BF_AI_API AIGS_MonsterCloset : public AIGS_AITransitionObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_AIEnemyGroupSpawner*> AIEnemyGroupSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_ScriptPoint*> CharacterRemovers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* helpersBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATriggerBase* AntiStuckTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToCheckTrigger;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceToPlayableArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToPlayableArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ApproxPlayableAreaEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CheckValidityInRuntime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AIGS_GameCharacterBase*, FTimerHandle> m_CharactersInTriggerTimers;
    
public:
    AIGS_MonsterCloset(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTriggerOverlapEnd(AActor* inOverlappedActor, AActor* inOtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerOverlapBegin(AActor* inOverlappedActor, AActor* inOtherActor);
    
};

