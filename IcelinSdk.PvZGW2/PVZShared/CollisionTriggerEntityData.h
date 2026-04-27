#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/Physics/RigidBodyCollisionLayer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864EB8
   RuntimeId:        2268
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B79
   VfTable:          0000000142351D90
   Address (Base):   00000001430E7120
*/
#pragma pack(push, 16)
class CollisionTriggerEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Radius; /* 0x0060 */
  RigidBodyCollisionLayer CollisionLayer; /* 0x0064 */
  FB_BOOLEAN Enabled; /* 0x0068 */
  char pad_0069[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(CollisionTriggerEntityData) == 112);

}
