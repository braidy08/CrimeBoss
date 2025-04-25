#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_ConnectionPointData.h"
#include "IGS_LevelGeneratorSubsystem.generated.h"

class ANavigationData;
class UIGS_LevelGeneratorSubsystem;
class UObject;

UCLASS(Blueprintable)
class BF_LEVELGENERATOR_API UIGS_LevelGeneratorSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBuildingFinished;
    
    UIGS_LevelGeneratorSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="inWorldContextObject"))
    static UIGS_LevelGeneratorSubsystem* Instance(const UObject* inWorldContextObject);
    
private:
    UFUNCTION(BlueprintCallable)
    void InitializeRooms_Server(ANavigationData* inNavData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDefaultSeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform ComputeTranslationAndRotationTransform(const FIGS_ConnectionPointData& inConnection1, const FIGS_ConnectionPointData& inConnection2);
    
};

