#include "META_HeatManagerComponent.h"

UMETA_HeatManagerComponent::UMETA_HeatManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SheriffTarget = EMETA_Gang::None;
    this->LastAmountDetectivesToSpawn = 0;
    this->HeatState = EMETA_Heat::VeryLow;
    this->PoliceInvestigationValue = 0.00f;
    this->PreviousPoliceInvestigationValue = 0.00f;
    this->HeatValue = 0.00f;
}

void UMETA_HeatManagerComponent::RemoveTimedEffect(const FGameplayTag inEffectTag) {
}

bool UMETA_HeatManagerComponent::IsTimedEffectActive(const FGameplayTag inEffectTag) {
    return false;
}

float UMETA_HeatManagerComponent::GetInvestigationGrowthRate() const {
    return 0.0f;
}

float UMETA_HeatManagerComponent::GetHeatGrowthRate() const {
    return 0.0f;
}

bool UMETA_HeatManagerComponent::GetCombinedEffects(const FGameplayTagContainer inEffectFilter, float& outCombinedValue, int32& OutDuration) const {
    return false;
}

void UMETA_HeatManagerComponent::ChangeTimedEffectPercentageModifier(const FGameplayTag inEffectTag, const int32 inPercentageChange) {
}

void UMETA_HeatManagerComponent::ChangeTimedEffectDuration(const FGameplayTag inEffectTag, const int32 inDurationChange) {
}

void UMETA_HeatManagerComponent::ChangeDurationOfAllTimedEffects(const int32 inDurationChange) {
}

float UMETA_HeatManagerComponent::CalculateInvestigationChangeWithModifiers(const float inInvestigationChange) const {
    return 0.0f;
}

float UMETA_HeatManagerComponent::CalculateHeatChangeWithModifiers(const float inHeatChange) const {
    return 0.0f;
}

void UMETA_HeatManagerComponent::AddTimedEffect(const FGameplayTag inEffectTag, const int32 inPercentModifier, const int32 inDuration) {
}

void UMETA_HeatManagerComponent::AddInvestigationEffect(const FGameplayTag inEffectTag, const int32 inPercentModifier, const int32 inDuration) {
}

void UMETA_HeatManagerComponent::AddHeatEffect(const FGameplayTag inEffectTag, const int32 inPercentModifier, const int32 inDuration) {
}


