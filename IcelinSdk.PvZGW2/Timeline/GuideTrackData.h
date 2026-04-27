#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineTrackData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854A48
   RuntimeId:        1791
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CD2
   VfTable:          00000001422B4898
   Address (Base):   00000001430DAD90
*/
#pragma pack(push, 8)
class GuideTrackData : public TimelineTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 GuideTrackPriority; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(GuideTrackData) == 48);

}
