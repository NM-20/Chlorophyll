#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>
#include <IcelinSdk.PvZGW2/Entity/GameplayBones.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C4A8
   RuntimeId:        26EC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08FF
   VfTable:          0000000142366770
   Address (Base):   00000001430F61F0
*/
#pragma pack(push, 8)
class BeamVFXBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EffectBlueprint) Effect; /* 0x0018 */
  GameplayBones SourceBone; /* 0x0020 */
  GameplayBones TargetBone; /* 0x0024 */
  FB_FLOAT32 FallbackHeightOffset; /* 0x0028 */
  FB_FLOAT32 MinPowerThreshold; /* 0x002C */
  FB_FLOAT32 MaxPowerThreshold; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(BeamVFXBuffEffectData) == 56);

}
