#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerStateGame.h"
#include "IGS_DummyBotPlayerState.generated.h"

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API AIGS_DummyBotPlayerState : public AIGS_PlayerStateGame {
    GENERATED_BODY()
public:
    AIGS_DummyBotPlayerState(const FObjectInitializer& ObjectInitializer);

};

