#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineTrackData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D200
   RuntimeId:        10E9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CB6
   VfTable:          00000001422744F8
   Address (Base):   0000000143112270
*/
#pragma pack(push, 8)
class ANTClipKeyframeTrackData : public TimelineTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class ANTClipKeyframe) Keyframes; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ANTClipKeyframeTrackData) == 48);

}
