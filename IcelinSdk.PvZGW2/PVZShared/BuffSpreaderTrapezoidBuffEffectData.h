#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C508
   RuntimeId:        26F2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0917
   VfTable:          0000000142366728
   Address (Base):   00000001430F69D0
*/
#pragma pack(push, 16)
class BuffSpreaderTrapezoidBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BuffData) Buff; /* 0x0018 */
  Vec3 Offset; /* 0x0020 */
  FB_FLOAT32 Period; /* 0x0030 */
  FB_FLOAT32 Length; /* 0x0034 */
  FB_FLOAT32 NearWidth; /* 0x0038 */
  FB_FLOAT32 FarWidth; /* 0x003C */
  FB_FLOAT32 MaxYDifference; /* 0x0040 */
  FB_FLOAT32 MinPowerThreshold; /* 0x0044 */
  FB_FLOAT32 MaxPowerThreshold; /* 0x0048 */
  FB_BOOLEAN ApplyAtStartOfPeriod; /* 0x004C */
  FB_BOOLEAN UseShootTransform; /* 0x004D */
  char pad_004E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(BuffSpreaderTrapezoidBuffEffectData) == 80);

}
