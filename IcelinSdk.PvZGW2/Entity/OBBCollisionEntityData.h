#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C190
   RuntimeId:        098C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B35
   VfTable:          0000000142212148
   Address (Base):   00000001430EEFE0
*/
#pragma pack(push, 16)
class OBBCollisionEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 HalfExtents; /* 0x0060 */
  FB_REFARRAY(class EntityData) PhysicsBodies; /* 0x0070 */
  FB_BOOLEAN Enabled; /* 0x0078 */
  FB_BOOLEAN CharacterOnly; /* 0x0079 */
  char pad_007A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(OBBCollisionEntityData) == 128);

}
