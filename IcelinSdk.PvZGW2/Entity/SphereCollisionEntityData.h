#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C170
   RuntimeId:        098A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B4D
   VfTable:          00000001422121B8
   Address (Base):   00000001430EF040
*/
#pragma pack(push, 16)
class SphereCollisionEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 Position; /* 0x0060 */
  FB_FLOAT32 Radius; /* 0x0070 */
  char pad_0074[0x0004];
  FB_REFARRAY(class EntityData) PhysicsBodies; /* 0x0078 */
  FB_BOOLEAN Enabled; /* 0x0080 */
  char pad_0081[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(SphereCollisionEntityData) == 144);

}
