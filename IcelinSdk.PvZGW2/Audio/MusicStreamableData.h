#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/MusicPlayableData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837CF0
   RuntimeId:        0544
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0841
   VfTable:          00000001421F9B48
   Address (Base):   00000001430DCAD0
*/
#pragma pack(push, 8)
class MusicStreamableData : public MusicPlayableData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 RangeValue; /* 0x0038 */
  FB_INT32 Weight; /* 0x003C */
  FB_HANDLE(class MusicStreamableData) NextPlayable; /* 0x0040 */
  FB_HANDLE(class MusicOverlayData) OnNextPlayableOverlay; /* 0x0048 */
  FB_BOOLEAN AllowRangeFade; /* 0x0050 */
  FB_BOOLEAN RestartIfAlreadyPlaying; /* 0x0051 */
  char pad_0052[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(MusicStreamableData) == 88);

}
