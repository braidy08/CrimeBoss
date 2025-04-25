#include "PaybackGameInstance.h"

UPaybackGameInstance::UPaybackGameInstance() {
    this->ChatHistoryLineLimit = 20;
    this->CoreMapsData = NULL;
}

void UPaybackGameInstance::TriggerOnLoginChangedAfterEAS() const {
}

void UPaybackGameInstance::SetUseEAS(bool inUseEAS) {
}

void UPaybackGameInstance::OnTextChatMessageSent(FText inMessage, const FString& inPlayerName, int32 inHeisterNum) {
}

void UPaybackGameInstance::OnLocalTextChatMessageSent(FText inMessage) {
}


void UPaybackGameInstance::GetUseEAS(bool& outUseEAS) {
}




