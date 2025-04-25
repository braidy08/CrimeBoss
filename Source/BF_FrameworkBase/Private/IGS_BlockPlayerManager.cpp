#include "IGS_BlockPlayerManager.h"

UIGS_BlockPlayerManager::UIGS_BlockPlayerManager() {
}

void UIGS_BlockPlayerManager::UnblockPlayer(const FString& inProductUserID) {
}

bool UIGS_BlockPlayerManager::IsPlayerBlocked(const APlayerState* inPlayerState) {
    return false;
}

int32 UIGS_BlockPlayerManager::GetNumberOfBlockedPlayers() const {
    return 0;
}

int32 UIGS_BlockPlayerManager::GetMaxNumberOfBlockedPlayers() const {
    return 0;
}

TArray<FIGS_BlockedPlayerHolder> UIGS_BlockPlayerManager::GetAllBlockedPlayers() const {
    return TArray<FIGS_BlockedPlayerHolder>();
}

void UIGS_BlockPlayerManager::BlockPlayer(const APlayerState* inBlockedPlayerState) {
}


