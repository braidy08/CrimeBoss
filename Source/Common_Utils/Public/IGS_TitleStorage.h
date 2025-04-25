#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_TitleStorage.generated.h"

UCLASS(Blueprintable)
class COMMON_UTILS_API UIGS_TitleStorage : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_TitleStorage();

};

