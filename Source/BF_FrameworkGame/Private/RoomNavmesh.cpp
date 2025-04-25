#include "RoomNavmesh.h"

ARoomNavmesh::ARoomNavmesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeMainNavData = false;
    this->bLockRebuild = false;
}


