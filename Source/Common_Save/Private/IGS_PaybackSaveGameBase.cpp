#include "IGS_PaybackSaveGameBase.h"

UIGS_PaybackSaveGameBase::UIGS_PaybackSaveGameBase() {
    this->SaveFileVersion = 0;
    this->SaveDataEncryptionKey = TEXT("6516263");
    this->bFailedChecksum = false;
    this->bShouldUnlockVeteranRewards = false;
    this->bAppliedPatchSave = false;
    this->SaveCounter = 0;
    this->LoadCounter = 0;
}


