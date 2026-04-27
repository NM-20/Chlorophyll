#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineKeyframeData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F470
   RuntimeId:        12C1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1202
   VfTable:          0000000142276690
   Address (Base):   00000001431109B0
*/
#pragma pack(push, 8)
class PoseTrackKeyframe : public TimelineKeyframeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Time; /* 0x0010 */
  char pad_0014[0x0004];
  FB_HANDLE(class PoseDefinition) TransitionTo; /* 0x0018 */
  FB_FLOAT32 DurationOverride; /* 0x0020 */
  char pad_0024[0x0004];
  FB_HANDLE(class PoseTransitionBase) TransitionOverride; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PoseTrackKeyframe) == 48);

}
