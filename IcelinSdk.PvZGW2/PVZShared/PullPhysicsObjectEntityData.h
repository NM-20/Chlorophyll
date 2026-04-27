#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865508
   RuntimeId:        22C7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AAE
   VfTable:          0000000142351588
   Address (Base):   00000001430E6FA0
*/
#pragma pack(push, 16)
class PullPhysicsObjectEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Force; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 DebugDrawColor; /* 0x0020 */
  FB_BOOLEAN Active; /* 0x0030 */
  char pad_0031[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(PullPhysicsObjectEntityData) == 64);

}
