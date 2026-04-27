#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 00000001428557D8
   RuntimeId:        1846
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09FC
   VfTable:          00000001422BBC88
   Address (Base):   00000001430E9EE0
*/
#pragma pack(push, 16)
class RadiosityMaterialEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ObjectBlueprint) Blueprint; /* 0x0018 */
  Vec3 Color; /* 0x0020 */
  FB_UINT64 MaterialId; /* 0x0030 */
  FB_FLOAT32 EmissiveIntensity; /* 0x0038 */
  FB_FLOAT32 Opacity; /* 0x003C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(RadiosityMaterialEntityData) == 64);

}
