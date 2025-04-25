#pragma once
#include "CoreMinimal.h"
#include "TacticalPathfindingNode.h"
#include "TacticalPathfindingNodeEntrance.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UTacticalPathfindingNodeEntrance : public UTacticalPathfindingNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UTacticalPathfindingNode*> Rooms;
    
    UTacticalPathfindingNodeEntrance();

};

