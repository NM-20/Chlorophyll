#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/SchematicPinTrackData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854D28
   RuntimeId:        17C1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CC8
   VfTable:          00000001422B5508
   Address (Base):   00000001430EA300
*/
#pragma pack(push, 8)
class EventTrackData : public SchematicPinTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct EventKeyframe) Keyframes; /* 0x0038 */
  FB_INT32 AntiEventId; /* 0x0040 */
  FB_BOOLEAN FireEventsUponSkip; /* 0x0044 */
  FB_BOOLEAN UpdatePropertiesAtEvents; /* 0x0045 */
  char pad_0046[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(EventTrackData) == 72);

}
