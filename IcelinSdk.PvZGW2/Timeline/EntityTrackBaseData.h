#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineTrackData.h>
#include <IcelinSdk.PvZGW2/Timeline/EntityTrackSharingPolicy.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854C28
   RuntimeId:        17B1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CAC
   VfTable:          00000001422B5648
   Address (Base):   00000001430D5B30
*/
#pragma pack(push, 8)
class EntityTrackBaseData : public TimelineTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class TimelineTrackData) Children; /* 0x0028 */
  EntityTrackSharingPolicy EntitySharingPolicy; /* 0x0030 */
  FB_BOOLEAN InheritedToChildConversationLines; /* 0x0034 */
  FB_BOOLEAN Required; /* 0x0035 */
  char pad_0036[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(EntityTrackBaseData) == 56);

}
