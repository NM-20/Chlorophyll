#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C6C8
   RuntimeId:        270E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          093B
   VfTable:          00000001423666C8
   Address (Base):   00000001430D9770
*/
#pragma pack(push, 8)
class LookSpeedBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MinPowerMultiplier; /* 0x0018 */
  FB_FLOAT32 MaxPowerMultiplier; /* 0x001C */
  FB_FLOAT32 MinMouseSensitivitySliderOverride; /* 0x0020 */
  FB_FLOAT32 MaxMouseSensitivitySliderOverride; /* 0x0024 */
  FB_FLOAT32 MinGamepadSensitivitySliderOverride; /* 0x0028 */
  FB_FLOAT32 MaxGamepadSensitivitySliderOverride; /* 0x002C */
  FB_FLOAT32 MinPowerThreshold; /* 0x0030 */
  FB_FLOAT32 MaxPowerThreshold; /* 0x0034 */
  FB_BOOLEAN SetMultiplier; /* 0x0038 */
  FB_BOOLEAN SetSensitivitySliders; /* 0x0039 */
  char pad_003A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(LookSpeedBuffEffectData) == 64);

}
