#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineTrackData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F8B8
   RuntimeId:        1303
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CD6
   VfTable:          0000000142276B00
   Address (Base):   00000001430FC850
*/
#pragma pack(push, 8)
class CameraDirectorTrackBaseData : public TimelineTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class TimelineTrackData) Children; /* 0x0028 */
  FB_HANDLE(class CameraTrackBaseData) PostTimelineCamera; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(CameraDirectorTrackBaseData) == 56);

}
