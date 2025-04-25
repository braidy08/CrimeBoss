#include "META_CityMapManagerComponent.h"

UMETA_CityMapManagerComponent::UMETA_CityMapManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SelectedTileObject = NULL;
    this->SelectedMission = NULL;
    this->SelectedTurfIconTile = NULL;
    this->LastDayOfTilesIncomeRefresh = 0;
    this->PrevTileStrenght = 0;
    this->ForceMapEvents = false;
}

TArray<FGameplayTag> UMETA_CityMapManagerComponent::TryToGetConnectedTiles(const TArray<FGameplayTag> inValidTiles, int32 inTilesAmount) {
    return TArray<FGameplayTag>();
}

void UMETA_CityMapManagerComponent::GetTileObject_Implementation(const FGameplayTag inID, UMapTile*& outTileObject) {
}


