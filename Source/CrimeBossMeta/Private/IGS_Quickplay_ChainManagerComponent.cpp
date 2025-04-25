#include "IGS_Quickplay_ChainManagerComponent.h"

UIGS_Quickplay_ChainManagerComponent::UIGS_Quickplay_ChainManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}




TArray<FMETA_CharacterInfo> UIGS_Quickplay_ChainManagerComponent::LoadCrewToCharacterInfo(const TArray<UMETA_Character*>& inCharacters, const FIGS_ChainCrew& inChainCrew) {
    return TArray<FMETA_CharacterInfo>();
}



UMETA_Character* UIGS_Quickplay_ChainManagerComponent::InitChainCharacter(const FIGS_ChainCharacter& inChainCharacter) {
    return NULL;
}


FIGS_ChainCharacter UIGS_Quickplay_ChainManagerComponent::GetMatchingChainCharacter(const UMETA_Character* inCharacter, const FIGS_ChainCrew& inChainCrew, bool& outSuccess) {
    return FIGS_ChainCharacter{};
}





int32 UIGS_Quickplay_ChainManagerComponent::GetBonusChainRewardWithMultipliers(const FIGS_ActiveChainData& inChainData, const ECommonMissionResult inResult, const int32 inStarRating, TArray<FIGS_MissionResultRewardItem>& outRewardItems) const {
    return 0;
}




