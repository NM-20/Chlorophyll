#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineKeyframeData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F2F0
   RuntimeId:        12A9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1203
   VfTable:          0000000142276840
   Address (Base):   0000000143110C50
*/
#pragma pack(push, 8)
class NetworkReplayKeyframe : public TimelineKeyframeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Time; /* 0x0010 */
  FB_FLOAT32 Length; /* 0x0014 */
  FB_FLOAT32 StartTrim; /* 0x0018 */
  FB_FLOAT32 EndTrim; /* 0x001C */
  FB_CSTRING CaptureName; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(NetworkReplayKeyframe) == 40);

}
