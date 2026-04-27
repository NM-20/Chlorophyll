#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Physics/RigidBodyCollisionLayer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851B48
   RuntimeId:        14D8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09B2
   VfTable:          000000014227EF40
   Address (Base):   00000001430BFDD0
*/
#pragma pack(push, 8)
class PhysicsBodyData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  RigidBodyCollisionLayer CollisionLayer; /* 0x001C */
  FB_HANDLE(class Asset) Asset; /* 0x0020 */
  FB_UINT8 AssetIndex; /* 0x0028 */
  FB_UINT8 TransformIndex; /* 0x0029 */
  FB_UINT8 WorldIndex; /* 0x002A */
  FB_UINT8 CollisionRootShapeIndex; /* 0x002B */
  FB_UINT8 RaycastRootShapeIndex; /* 0x002C */
  FB_BOOLEAN AddToSpatialQueryManager; /* 0x002D */
  char pad_002E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PhysicsBodyData) == 48);

}
