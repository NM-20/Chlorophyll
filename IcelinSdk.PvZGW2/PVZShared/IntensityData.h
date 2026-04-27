#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/GameIntensityTemplateData.h>
#include <IcelinSdk.PvZGW2/Core/AudioCurve.h>

namespace fb
{

/* TypeInfo (Array): 00000001428738A8
   RuntimeId:        2BF8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0680
   VfTable:          0000000142379008
   Address (Base):   00000001430BF650
*/
#pragma pack(push, 8)
class IntensityData : public GameIntensityTemplateData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 RampSpeed; /* 0x0018 */
  FB_FLOAT32 StartingIntensityMin; /* 0x001C */
  FB_FLOAT32 StartingIntensityMax; /* 0x0020 */
  char pad_0024[0x0004];
  FB_STDARRAY(struct IntensityInfluence) InfluenceList; /* 0x0028 */
  AudioCurve IntensityBaseline; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(IntensityData) == 64);

}
