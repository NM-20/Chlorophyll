#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineTrackData.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F7F8
   RuntimeId:        12F7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CE0
   VfTable:          0000000142276C90
   Address (Base):   00000001430EBB00
*/
#pragma pack(push, 8)
class ANTBoneAnimationTrackData : public TimelineTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class LayeredTransformTrackData) LayeredTransformTrack; /* 0x0028 */
  FB_HANDLE(class ANTControlTrackData) AntControlTrack; /* 0x0030 */
  FB_REFARRAY(class TimelineTrackData) BoneTracks; /* 0x0038 */
  AntRef Actor; /* 0x0040 */
  char pad_0054[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(ANTBoneAnimationTrackData) == 88);

}
