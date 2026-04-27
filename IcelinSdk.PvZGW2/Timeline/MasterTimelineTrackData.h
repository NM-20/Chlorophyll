#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineTrackData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854848
   RuntimeId:        1771
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CB5
   VfTable:          00000001422B4BF0
   Address (Base):   00000001430EA780
*/
#pragma pack(push, 8)
class MasterTimelineTrackData : public TimelineTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class SlaveTimelineKeyframeData) Keyframes; /* 0x0028 */
  FB_REFARRAY(class TimelineTrackData) Children; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(MasterTimelineTrackData) == 56);

}
