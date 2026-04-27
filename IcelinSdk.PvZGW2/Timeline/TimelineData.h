#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineTrackData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854968
   RuntimeId:        1783
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CDF
   VfTable:          00000001422B4928
   Address (Base):   00000001430FB4D0
*/
#pragma pack(push, 8)
class TimelineData : public TimelineTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class TimelineTrackData) Children; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(TimelineData) == 48);

}
