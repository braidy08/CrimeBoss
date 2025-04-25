#pragma once
#include "CoreMinimal.h"
#include "IGS_HasObjectStatusInterface.h"
#include "GameFramework/Actor.h"
#include "IGS_ActorWithObjectStatus.generated.h"

class UIGS_ObjectStatus;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_ActorWithObjectStatus : public AActor, public IIGS_HasObjectStatusInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ObjectStatus* ObjectStatus;
    
public:
    AIGS_ActorWithObjectStatus(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

