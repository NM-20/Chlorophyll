#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/PhysicsMaterialRelationPropertyData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849A68
   RuntimeId:        0DE0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          115D
   VfTable:          000000014225F960
   Address (Base):   00000001430DC290
*/
#pragma pack(push, 16)
class MaterialPropertyTerrainData : public PhysicsMaterialRelationPropertyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EffectBlueprint) DestructionEffect; /* 0x0010 */
  FB_FLOAT32 DirtTriggerFactor; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 DirtTriggerColor; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(MaterialPropertyTerrainData) == 48);

}
