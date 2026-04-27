#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/PhysicsMaterialRelationPropertyData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849A28
   RuntimeId:        0DDC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1161
   VfTable:          000000014225F998
   Address (Base):   00000001430FD390
*/
#pragma pack(push, 8)
class MaterialPropertyEffectData : public PhysicsMaterialRelationPropertyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct EffectWithSpeedRange) ImpactEffects; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MaterialPropertyEffectData) == 24);

}
