#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverConversationInfo.h>

namespace fb
{

/* TypeInfo (Array): 000000014284AAA0
   RuntimeId:        0ECB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09F4
   VfTable:          0000000142263818
   Address (Base):   00000001430ED780
*/
#pragma pack(push, 8)
class VoiceOverConversationEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  VoiceOverConversationInfo Conversation; /* 0x0018 */
  FB_STDARRAY(struct VoiceOverConversationEntityTrackInfo) TrackInfos; /* 0x0048 */
  FB_FLOAT32 TriggerDelay; /* 0x0050 */
  FB_FLOAT32 FinishedDelay; /* 0x0054 */
  FB_INT32 PronunciationIndex; /* 0x0058 */
  FB_BOOLEAN RunOnce; /* 0x005C */
  FB_BOOLEAN NeedsTriggerResult; /* 0x005D */
  char pad_005E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverConversationEntityData) == 96);

}
