#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428596B8
   RuntimeId:        1B36
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0ABE
   VfTable:          00000001422DC088
   Address (Base):   00000001430E8920
*/
#pragma pack(push, 8)
class AudioRaycastCalculationEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct RayCalculationProperties) InputRaysProperties; /* 0x0018 */
  FB_UINT32 NumberOfAccumulationFrames; /* 0x0020 */
  FB_UINT32 MaxIndoorinessModifierRayIndex; /* 0x0024 */
  FB_FLOAT32 DefaultMaterialReflectionIfNoRaysHit; /* 0x0028 */
  char pad_002C[0x0004];
  FB_STDARRAY(struct RayHitMaterials) OutputHitSoundMaterials; /* 0x0030 */
  FB_FLOAT32 IndoorinessExponentiality; /* 0x0038 */
  FB_FLOAT32 MaxIndoorinessModifierRayValue; /* 0x003C */
  FB_BOOLEAN EnableMaxIndoorinessModifierRay; /* 0x0040 */
  FB_BOOLEAN ClampRaycastsAtMaxDistance; /* 0x0041 */
  FB_BOOLEAN ReturnMaxDistanceIfNoRaysHitting; /* 0x0042 */
  FB_BOOLEAN ContinuousUpdate; /* 0x0043 */
  char pad_0044[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(AudioRaycastCalculationEntityData) == 72);

}
