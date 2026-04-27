#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851F20
   RuntimeId:        1510
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B5C98
*/
enum RigidBodyCollisionLayer
{
  RigidBodyCollisionLayer_Invalid = 0,
  RigidBodyCollisionLayer_VehicleAndCharacterCollisionLayer = 25,
  RigidBodyCollisionLayer_VehicleLayer = 24,
  RigidBodyCollisionLayer_KeyframedCollisionBodyLayer = 23,
  RigidBodyCollisionLayer_OnlyStaticCameraCollisionLayer = 22,
  RigidBodyCollisionLayer_CameraCollisionLayer = 21,
  RigidBodyCollisionLayer_AiCollisionBodyLayer = 20,
  RigidBodyCollisionLayer_CharacterCollisionGeometryLayer = 19,
  RigidBodyCollisionLayer_OnlyTerrainCollionLayer = 18,
  RigidBodyCollisionLayer_TerrainLayer = 17,
  RigidBodyCollisionLayer_PredictedVehicleLayer = 16,
  RigidBodyCollisionLayer_DynamicNoCharacterCollisionLayer = 15,
  RigidBodyCollisionLayer_CharacterLayer = 14,
  RigidBodyCollisionLayer_NoVehicleCollisionLayer = 13,
  RigidBodyCollisionLayer_BangerLayer = 12,
  RigidBodyCollisionLayer_WaterLayer = 11,
  RigidBodyCollisionLayer_NoCollisionLayer = 10,
  RigidBodyCollisionLayer_RagdollLayer = 9,
  RigidBodyCollisionLayer_OnlyStaticCollisionLayer = 8,
  RigidBodyCollisionLayer_FastDebrisLayer = 7,
  RigidBodyCollisionLayer_DebrisLayer = 6,
  RigidBodyCollisionLayer_KeyframeLayer = 5,
  RigidBodyCollisionLayer_AICollisionLayer = 4,
  RigidBodyCollisionLayer_PlayerCollisionLayer = 3,
  RigidBodyCollisionLayer_DynamicLayer = 2,
  RigidBodyCollisionLayer_StaticLayer = 1,
  RigidBodyCollisionLayer_StaticCharacterCollisionGeometryLayer = 26,
  RigidBodyCollisionLayer_Size = 27,
};

}
