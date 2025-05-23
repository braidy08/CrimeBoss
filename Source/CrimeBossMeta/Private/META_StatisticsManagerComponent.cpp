#include "META_StatisticsManagerComponent.h"
#include "Templates/SubclassOf.h"

UMETA_StatisticsManagerComponent::UMETA_StatisticsManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentDay = 0;
    this->CareerScore = 0;
    this->StartDayForStatistics = 0;
}

bool UMETA_StatisticsManagerComponent::TryModifyGlobalStatistic(const FGameplayTag inStatistic, const float InValue, float& outNewValue, const EMETA_StatisticModificationType inMode) {
    return false;
}

bool UMETA_StatisticsManagerComponent::TryGetExpandedStatisticsTag(FGameplayTag inRootTag, FGameplayTag& outExpandedTag) const {
    return false;
}

void UMETA_StatisticsManagerComponent::SetStatisticFromLoad(TMap<int32, FMETA_StatisticNoteSaveData> inStatistic, int32 inCurrentDay) {
}

void UMETA_StatisticsManagerComponent::SetStartDayForStatistics(int32 inStartDay) {
}

void UMETA_StatisticsManagerComponent::RemoveAssetFromStatistic(FGameplayTag InAsset) {
}

void UMETA_StatisticsManagerComponent::LogGlobalStatistics(const bool inExpand) {
}

void UMETA_StatisticsManagerComponent::InitStatisticCurrentDay(int32 inDay) {
}

FMETA_StatisticsRootTags UMETA_StatisticsManagerComponent::GetStatisticsRootTags() const {
    return FMETA_StatisticsRootTags{};
}

TMap<int32, FMETA_StatisticNoteSaveData> UMETA_StatisticsManagerComponent::GetStatisticForSave() {
    return TMap<int32, FMETA_StatisticNoteSaveData>();
}

FMETA_StatisticNoteSaveData UMETA_StatisticsManagerComponent::GetStatisticForInteraval(int32 inStartDay, int32 inEndDay) const {
    return FMETA_StatisticNoteSaveData{};
}

FMETA_StatisticNoteSaveData UMETA_StatisticsManagerComponent::GetStatisticByDay(int32 inDay) const {
    return FMETA_StatisticNoteSaveData{};
}

int32 UMETA_StatisticsManagerComponent::GetNumberOfSuccessfulTurfwarDefenses() const {
    return 0;
}

int32 UMETA_StatisticsManagerComponent::GetNumberOfSuccessfulTurfwarAttacks() const {
    return 0;
}

int32 UMETA_StatisticsManagerComponent::GetNumberOfSuccessfulFPSMissions() const {
    return 0;
}

int32 UMETA_StatisticsManagerComponent::GetNumberOfAllSuccessfulMissions() const {
    return 0;
}

float UMETA_StatisticsManagerComponent::GetGlobalStatistic(const FGameplayTag inStatistic, const bool inExpand, const EMETA_StatisticEvaluationType inMode) const {
    return 0.0f;
}

FMETA_StatisticNoteSaveData UMETA_StatisticsManagerComponent::GetFullStatistic() const {
    return FMETA_StatisticNoteSaveData{};
}

float UMETA_StatisticsManagerComponent::GetFinalScoreMultiplier() const {
    return 0.0f;
}

void UMETA_StatisticsManagerComponent::AddWeaponBoughtToStatistic(UMETA_Weapon* inWeapon) {
}

void UMETA_StatisticsManagerComponent::AddTurfWarMissionDataToStatistic(UMETA_BaseMission* inMission, TMap<FGameplayTag, int32> inFPSData, FIGS_FPS2Meta_Data inFPSEconomyData, FIGS_SharedMetaTransfer_Data inShareData) {
}

void UMETA_StatisticsManagerComponent::AddTurfMissionSoldersCasualtiesToStatistic(int32 inSoldersCasualties) {
}

void UMETA_StatisticsManagerComponent::AddTradeMissionToStatistic(UMETA_BaseMission* inMission) {
}

void UMETA_StatisticsManagerComponent::AddStateToHeister(FMETA_CharacterID inID, EMETA_StatisticsHeisterState inState) {
}

void UMETA_StatisticsManagerComponent::AddRecruitedTurfWarSoldiersToStatistic(int32 inAmount) {
}

void UMETA_StatisticsManagerComponent::AddMoneyChangesToStatistic(int32 inCurrentMoney, int32 inChangedBy) {
}

void UMETA_StatisticsManagerComponent::AddMissionDataToStatistic(UMETA_BaseMission* inMission, TMap<FGameplayTag, int32> inFPSData, FIGS_FPS2Meta_Data inFPSEconomyData, FIGS_SharedMetaTransfer_Data inShareData, int32 inCountOfStars) {
}

void UMETA_StatisticsManagerComponent::AddLostMoneyAndLootAfterWarehouseToStatistic(int32 inLostMoney, TMap<FGameplayTag, int32> inLostLoot) {
}

void UMETA_StatisticsManagerComponent::AddLootChangesToStatistic(FGameplayTag inLoot, int32 inAmount) {
}

void UMETA_StatisticsManagerComponent::AddIsolatedTurfsToStatistic(UMapTile* inTile) {
}

void UMETA_StatisticsManagerComponent::AddHiredArmyForTurfToStatistic(int32 inCount) {
}

FMETA_HeisterStatisticData UMETA_StatisticsManagerComponent::AddHeisterToStatistic(UMETA_Character* inCharacter) {
    return FMETA_HeisterStatisticData{};
}

void UMETA_StatisticsManagerComponent::AddGoalToStatistic(TSubclassOf<UMETA_BaseGoal> inGoal, EMETA_GoalStatus inGoalStatus) {
}

void UMETA_StatisticsManagerComponent::AddFPSMissionDataToStatistic(UMETA_BaseMission* inMission, TMap<FGameplayTag, int32> inFPSData, FIGS_FPS2Meta_Data inFPSEconomyData, FIGS_SharedMetaTransfer_Data inShareData, int32 inCountOfStars, FMETA_FinishedMissionInfo& inFinishedMissionInfo) {
}

void UMETA_StatisticsManagerComponent::AddFinishedPlotlineToStatistic(TSoftObjectPtr<UMETA_BaseStoryGraphManager> inGraphs) {
}

void UMETA_StatisticsManagerComponent::AddEnemyBossEliminatedToStatistic(EMETA_Gang inGang) {
}

void UMETA_StatisticsManagerComponent::AddDay(int32 inDay) {
}

void UMETA_StatisticsManagerComponent::AddCampaignCompleteDataToStatistic(EMETA_CareerCompletionReason inReason, int32 inScore) {
}

void UMETA_StatisticsManagerComponent::AddBossPointsToStatistic(float inBossPoints) {
}

void UMETA_StatisticsManagerComponent::AddBossLevelToStatistics(int32 inBossLevel) {
}

void UMETA_StatisticsManagerComponent::AddBankruptcyDataToStatistic(bool inBankruptcy) {
}

void UMETA_StatisticsManagerComponent::AddAssetToStatistic(FGameplayTag InAsset, EMETA_PlotlineAssetAvailability inAvailability) {
}


