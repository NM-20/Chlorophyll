#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851EE0
   RuntimeId:        150C
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BA3A0
*/
enum RigidBodyMotionType
{
  RigidBodyMotionType_Invalid = 0,
  RigidBodyMotionType_Fixed = 1,
  RigidBodyMotionType_Keyframed = 2,
  RigidBodyMotionType_Dynamic = 3,
  RigidBodyMotionType_Size = 4,
};

}
