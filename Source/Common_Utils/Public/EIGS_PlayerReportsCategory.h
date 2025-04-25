#pragma once
#include "CoreMinimal.h"
#include "EIGS_PlayerReportsCategory.generated.h"

UENUM(BlueprintType)
enum class EIGS_PlayerReportsCategory : uint8 {
    EOS_PRC_Invalid,
    EOS_PRC_Cheating,
    EOS_PRC_Exploiting,
    EOS_PRC_OffensiveProfile,
    EOS_PRC_VerbalAbuse,
    EOS_PRC_Scamming,
    EOS_PRC_Spamming,
    EOS_PRC_Other,
};

