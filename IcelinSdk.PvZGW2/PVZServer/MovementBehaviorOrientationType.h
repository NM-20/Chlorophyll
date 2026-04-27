#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F738
   RuntimeId:        1DB7
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B9860
*/
enum MovementBehaviorOrientationType
{
  MovementBehaviorOrientationType_FaceTargetElseTravelDir = 0,
  MovementBehaviorOrientationType_FaceTravelDir = 1,
  MovementBehaviorOrientationType_FaceHealer = 2,
  MovementBehaviorOrientationType_FaceInterest = 3,
  MovementBehaviorOrientationType_FaceDirection = 4,
};

}
