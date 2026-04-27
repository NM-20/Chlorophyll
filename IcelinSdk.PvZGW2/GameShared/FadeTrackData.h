#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineTrackData.h>
#include <IcelinSdk.PvZGW2/Core/LocalPlayerId.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F270
   RuntimeId:        12A1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CE1
   VfTable:          0000000142276950
   Address (Base):   00000001430EBDA0
*/
#pragma pack(push, 8)
class FadeTrackData : public TimelineTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class FadeTrackKeyframe) Keyframes; /* 0x0028 */
  LocalPlayerId LocalPlayerId; /* 0x0030 */
  FB_BOOLEAN FadeScreen; /* 0x0034 */
  FB_BOOLEAN FadeUI; /* 0x0035 */
  FB_BOOLEAN FadeAudio; /* 0x0036 */
  FB_BOOLEAN FadeMovie; /* 0x0037 */
  FB_BOOLEAN FadeRumble; /* 0x0038 */
  FB_BOOLEAN FadeCameraShake; /* 0x0039 */
  char pad_003A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(FadeTrackData) == 64);

}
