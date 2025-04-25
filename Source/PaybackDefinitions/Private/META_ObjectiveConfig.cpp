#include "META_ObjectiveConfig.h"

FMETA_ObjectiveConfig::FMETA_ObjectiveConfig() {
    this->ObjectiveType = EMETA_ObjectiveType::None;
    this->Amount = 0;
    this->AmountOperator = EMETA_ConditionOperator::Equal;
    this->RevivesAmount = 0;
    this->RevivesCalculation = EMETA_ObjectiveRevivesCalculation::AccumulateForAll;
    this->RetrieveLootInPercents = 0;
    this->MaximumAmountOfStrikes = 0;
    this->ZiptieXCivilians = 0;
    this->DontReachXPoliceStars = 0;
    this->RequiredMinimalLevel = 0;
    this->UniqueHeisterID = EIGS_CharacterID::Char_Gen_Start;
    this->Seconds = 0;
    this->EnemiesAmount = 0;
    this->GangstersAmount = 0;
    this->PoliceKills = 0;
    this->SWATKills = 0;
    this->ValidTeamSides = 0;
    this->OutputParamValue = 0;
    this->OutputParamOperator = EMETA_ConditionOperator::Equal;
    this->DaysToComplete = 0;
    this->bStealthRequired = false;
    this->ShowInFPS = false;
}

