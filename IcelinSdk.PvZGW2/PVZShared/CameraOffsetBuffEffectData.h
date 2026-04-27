#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C568
   RuntimeId:        26F8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          090E
   VfTable:          0000000142366800
   Address (Base):   00000001430F6130
*/
#pragma pack(push, 16)
class CameraOffsetBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Rotation; /* 0x0018 */
  char pad_001C[0x0004];
  Vec4 Offset; /* 0x0020 */
  FB_FLOAT32 VerticalOffset; /* 0x0030 */
  FB_FLOAT32 HorizontalOffset; /* 0x0034 */
  FB_FLOAT32 MinPowerThreshold; /* 0x0038 */
  FB_FLOAT32 MaxPowerThreshold; /* 0x003C */
  FB_FLOAT32 FixedPowerThreshold; /* 0x0040 */
  FB_FLOAT32 FixedBlendInTime; /* 0x0044 */
  FB_FLOAT32 FixedBlendOutTime; /* 0x0048 */
  FB_BOOLEAN TargetMeleeAttacker; /* 0x004C */
  FB_BOOLEAN BlendWithPower; /* 0x004D */
  char pad_004E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(CameraOffsetBuffEffectData) == 80);

}
