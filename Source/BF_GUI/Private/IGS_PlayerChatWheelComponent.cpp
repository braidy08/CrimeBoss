#include "IGS_PlayerChatWheelComponent.h"

UIGS_PlayerChatWheelComponent::UIGS_PlayerChatWheelComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_Settings = NULL;
    this->m_SpamPreventionActive = false;
}

void UIGS_PlayerChatWheelComponent::ShowSpamPreventionMessage() {
}

void UIGS_PlayerChatWheelComponent::Server_HandleChatWheelReaction_Implementation(FGameplayTag inTag) {
}
bool UIGS_PlayerChatWheelComponent::Server_HandleChatWheelReaction_Validate(FGameplayTag inTag) {
    return true;
}

void UIGS_PlayerChatWheelComponent::HandleChatWheelReaction(FGameplayTag inTag) {
}


