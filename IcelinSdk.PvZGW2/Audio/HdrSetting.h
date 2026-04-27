#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/AudioCurve.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837790
   RuntimeId:        04EE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E50
   VfTable:          00000001421FA160
   Address (Base):   00000001430F26A0
*/
#pragma pack(push, 8)
class HdrSetting : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 WindowMinTop; /* 0x0010 */
  FB_FLOAT32 WindowMinBottom; /* 0x0014 */
  FB_FLOAT32 WindowTopMinReleaseTime; /* 0x0018 */
  FB_FLOAT32 WindowTopMaxReleaseTime; /* 0x001C */
  FB_FLOAT32 WindowTopAttackTime; /* 0x0020 */
  FB_FLOAT32 WindowBottomReleaseTime; /* 0x0024 */
  AudioCurve WindowTopReleaseTimeCurve; /* 0x0028 */
  FB_FLOAT32 DischargeFactor; /* 0x0038 */
  FB_FLOAT32 MaxAllowedEnergy; /* 0x003C */
  FB_FLOAT32 WindowBottomAttackTime; /* 0x0040 */
  FB_FLOAT32 WindowSize; /* 0x0044 */
  FB_FLOAT32 CompressFactor; /* 0x0048 */
  FB_FLOAT32 Headroom; /* 0x004C */
  FB_FLOAT32 AllowedOvershoot; /* 0x0050 */
  char pad_0054[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(HdrSetting) == 88);

}
