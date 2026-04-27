#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>
#include <IcelinSdk.PvZGW2/Entity/GameplayBones.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C948
   RuntimeId:        2736
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0943
   VfTable:          0000000142366428
   Address (Base):   00000001430F5B90
*/
#pragma pack(push, 8)
class VFXBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EffectBlueprint) Effect; /* 0x0018 */
  FB_HANDLE(class EffectBlueprint) ApplicationEffect; /* 0x0020 */
  FB_HANDLE(class EffectBlueprint) RemovalEffect; /* 0x0028 */
  GameplayBones Bone; /* 0x0030 */
  FB_FLOAT32 MinPowerThreshold; /* 0x0034 */
  FB_FLOAT32 MaxPowerThreshold; /* 0x0038 */
  char pad_003C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(VFXBuffEffectData) == 64);

}
