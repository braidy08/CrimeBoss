#include "IGS_PlayerSuppressionHandlerComponent.h"
#include "NavAreas/NavArea_Obstacle.h"

UIGS_PlayerSuppressionHandlerComponent::UIGS_PlayerSuppressionHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).AreaClass = UNavArea_Obstacle::StaticClass();
    (*this).PrimaryComponentTick.bTickEvenWhenPaused = true;
    (*this).PrimaryComponentTick.bCanEverTick = true;
}

void UIGS_PlayerSuppressionHandlerComponent::PlayWhizSound() const {
}

void UIGS_PlayerSuppressionHandlerComponent::PlayDirectionalPlayerCue_Client_Implementation(const AIGS_GameCharacterBase* inSourceCharacter, const EIGS_DirectionalCueType inType) const {
}


