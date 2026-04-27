#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineTrackData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855CA8
   RuntimeId:        1880
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CB3
   VfTable:          00000001422BB760
   Address (Base):   00000001430E9700
*/
#pragma pack(push, 8)
class RenderFramesTrackData : public TimelineTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class RenderFramesKeyframe) Keyframes; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(RenderFramesTrackData) == 48);

}
