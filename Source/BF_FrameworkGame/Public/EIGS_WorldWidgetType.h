#pragma once
#include "CoreMinimal.h"
#include "EIGS_WorldWidgetType.generated.h"

UENUM(BlueprintType)
enum class EIGS_WorldWidgetType : uint8 {
    Widget_Hidden,
    Widget_Objective,
    Widget_Teammate,
    Widget_Detection,
    Widget_Alert,
    Widget_GenericPing,
    Widget_WalkieTalkie,
    Widget_CallingAlarm,
    Widget_PushingAlarmButton,
    Widget_TelephoneCallingHQ,
    Widget_CivilianEscaping,
    Widget_IsZiptied,
    Widget_Location,
    Widget_Warning,
    Widget_PossibleObjective,
    Widget_Drill,
    Widget_SecurityPhone,
    Widget_BlinkingExclamation,
    Widget_Downed,
    Widget_EscapeMission,
    Widget_StickyGuard,
    Widget_Valuable,
    Widget_DropArea,
    Widget_Interaction,
    Widget_Item,
    Widget_Task,
    Widget_CallingInStrike,
    Widget_FragGrenadeAI,
    Widget_FragGrenadePlayer,
    Widget_HEGrenadeAI,
    Widget_HEGrenadePlayer,
    Widget_MolotovAI,
    Widget_MolotovPlayer,
    Widget_StickyGreandeAI,
    Widget_StickyGreandePlayer,
    Widget_FlashGrenadeAI,
    Widget_FlashGrenadePlayer,
    Widget_StunGrenadeAI,
    Widget_StunGrenadePlayer,
    Widget_EMPGrenadeAI,
    Widget_EMPGrenadePlayer,
    Widget_PlantedC4,
    Widget_ExplodingBarrel,
    Widget_EmptyButVisible,
    Widget_KillTask,
    Widget_KillObjective,
    Widget_Computer,
    Widget_NewSuspicion,
    Widget_NewSuspicionImportant,
    Widget_NewSuspicionNotImportant,
    Widget_DrillJammed,
    Widget_DrillFinished,
    Widget_DetectorSuspicion,
    Widget_DetectorSuspicionImportant,
    Widget_DetectorSuspicionNotImportant,
    Widget_AmbientSuspicion,
    Widget_AmbientSuspicionImportant,
    Widget_AmbientSuspicionNotImportant,
    Widget_SuspicionOtherPlayer,
    Widget_SuspicionOtherPlayerNotImportant,
    Widget_PressToBreak,
    Widget_Buzzsaw,
    Widget_BuzzsawJammed,
    Widget_BuzzsawOverheat,
    Widget_BuzzsawFinished,
    Widget_DrillOverheat,
    Widget_HeisterReviving,
    Widget_HeisterLockpicing,
    Widget_NewSuspicionImportantSecondStage,
    Widget_SmartPingValid,
    Widget_SmartPingInvalid,
    Widget_SmartPingProgress,
    Widget_ChatWheelIcon,
    Widget_HordeVan,
    Widget_EscortObjective,
};

