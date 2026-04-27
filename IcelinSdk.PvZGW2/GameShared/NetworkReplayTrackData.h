#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/RecordTrackBaseData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F310
   RuntimeId:        12AB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CD0
   VfTable:          0000000142276850
   Address (Base):   0000000143110BF0
*/
#pragma pack(push, 8)
class NetworkReplayTrackData : public RecordTrackBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class NetworkReplayKeyframe) Keyframes; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(NetworkReplayTrackData) == 72);

}
