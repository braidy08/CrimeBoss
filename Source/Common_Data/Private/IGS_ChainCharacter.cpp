#include "IGS_ChainCharacter.h"

FIGS_ChainCharacter::FIGS_ChainCharacter() {
    this->CharacterID = EIGS_CharacterID::Char_Gen_Start;
    this->CharacterLoadout = NULL;
    this->bOverrideState = false;
    this->State = EMETA_CharacterState::None;
    this->bOverrideStartingPerks = false;
    this->StartingPerks = 0;
    this->bUseCharacterVariant = false;
    this->CharacterVariantIndex = 0;
}

