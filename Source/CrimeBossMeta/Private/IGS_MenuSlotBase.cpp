#include "IGS_MenuSlotBase.h"

AIGS_MenuSlotBase::AIGS_MenuSlotBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AIGS_MenuSlotBase::UpdatePlayerHeisterData(APlayerState* inPlayerState, const FCommonHeisterData& inHeisterData) {
}






AIGS_PlayerStateGame* AIGS_MenuSlotBase::CreateBotPlayerState() const {
    return NULL;
}


