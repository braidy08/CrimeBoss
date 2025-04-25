#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_ActorWithObjectStatus.h"
#include "IGS_ActorWithDamageHandler.generated.h"

class UIGS_DamageHandlerComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_ActorWithDamageHandler : public AIGS_ActorWithObjectStatus, public IGenericTeamAgentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_TeamSideEnum TeamSide;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_DamageHandlerComponent* DamageHandler;
    
public:
    AIGS_ActorWithDamageHandler(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

