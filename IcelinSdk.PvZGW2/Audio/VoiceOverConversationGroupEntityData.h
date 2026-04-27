#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837B70
   RuntimeId:        052C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09AF
   VfTable:          00000001421F9CB0
   Address (Base):   00000001430F2B20
*/
#pragma pack(push, 8)
class VoiceOverConversationGroupEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class VoiceOverConversationQueueGroup) QueueGroup; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverConversationGroupEntityData) == 32);

}
