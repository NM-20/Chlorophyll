#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851F00
   RuntimeId:        150E
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BA380
*/
enum RigidBodyQualityType
{
  RigidBodyQualityType_Fixed = 0,
  RigidBodyQualityType_Debris = 1,
  RigidBodyQualityType_Dynamic = 2,
  RigidBodyQualityType_NeighborWelding = 3,
  RigidBodyQualityType_MotionWelding = 4,
  RigidBodyQualityType_TriangleWelding = 5,
  RigidBodyQualityType_Critical = 6,
  RigidBodyQualityType_Vehicle = 7,
  RigidBodyQualityType_Character = 8,
  RigidBodyQualityType_Grenade = 9,
  RigidBodyQualityType_Projectile = 10,
  RigidBodyQualityType_Invalid = 11,
};

}
