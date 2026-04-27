#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/PhysicsMaterialRelationPropertyData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849AC8
   RuntimeId:        0DE6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1166
   VfTable:          000000014225F930
   Address (Base):   00000001430FD330
*/
#pragma pack(push, 8)
class MaterialRelationEffectData : public PhysicsMaterialRelationPropertyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct EffectWithSpeedRange) ImpactEffects; /* 0x0010 */
  FB_REFARRAY(class ObjectBlueprint) ImpactDebris; /* 0x0018 */
  FB_FLOAT32 ImpactEffectMaxSpreadAngle; /* 0x0020 */
  FB_BOOLEAN MirrorImpactDirection; /* 0x0024 */
  FB_BOOLEAN EnableInheritedVelocity; /* 0x0025 */
  char pad_0026[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MaterialRelationEffectData) == 40);

}
