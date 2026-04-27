#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineKeyframeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837990
   RuntimeId:        050E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1205
   VfTable:          00000001421FA048
   Address (Base):   00000001430DCBF0
*/
#pragma pack(push, 8)
class SoundEntityTrackKeyframeData : public TimelineKeyframeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Time; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(SoundEntityTrackKeyframeData) == 24);

}
