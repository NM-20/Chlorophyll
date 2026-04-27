#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineKeyframeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854828
   RuntimeId:        176F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          120B
   VfTable:          00000001422B4BE0
   Address (Base):   000000014310DB90
*/
#pragma pack(push, 8)
class SlaveTimelineKeyframeData : public TimelineKeyframeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Time; /* 0x0010 */
  FB_FLOAT32 Length; /* 0x0014 */
  FB_FLOAT32 GuideTime; /* 0x0018 */
  char pad_001C[0x0004];
  FB_HANDLE(class TimelineEntityData) TimelineData; /* 0x0020 */
  FB_STDARRAY(FB_GUID) SlaveGuidChain; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(SlaveTimelineKeyframeData) == 48);

}
