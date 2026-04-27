#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C668
   RuntimeId:        2708
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          093C
   VfTable:          00000001423665D8
   Address (Base):   00000001430F7450
*/
#pragma pack(push, 8)
class JumpHeightBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MinPowerMultiplier; /* 0x0018 */
  FB_FLOAT32 MaxPowerMultiplier; /* 0x001C */
  FB_FLOAT32 MinLowGravPowerMultiplier; /* 0x0020 */
  FB_FLOAT32 MaxLowGravPowerMultiplier; /* 0x0024 */
  FB_FLOAT32 MinPowerThreshold; /* 0x0028 */
  FB_FLOAT32 MaxPowerThreshold; /* 0x002C */
  FB_BOOLEAN UseLowGravValues; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(JumpHeightBuffEffectData) == 56);

}
