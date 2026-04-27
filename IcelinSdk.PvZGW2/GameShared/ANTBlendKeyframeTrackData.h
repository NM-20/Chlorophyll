#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineTrackData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D1E0
   RuntimeId:        10E7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CB4
   VfTable:          00000001422745B0
   Address (Base):   00000001431122D0
*/
#pragma pack(push, 8)
class ANTBlendKeyframeTrackData : public TimelineTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class ANTBlendKeyframe) Keyframes; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ANTBlendKeyframeTrackData) == 48);

}
