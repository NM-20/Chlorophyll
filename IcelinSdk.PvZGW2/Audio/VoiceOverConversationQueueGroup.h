#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverConversationQueueGroupPolyphony.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838B68
   RuntimeId:        0624
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          114C
   VfTable:          00000001421F9550
   Address (Base):   00000001431162F0
*/
#pragma pack(push, 8)
class VoiceOverConversationQueueGroup : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */
  VoiceOverConversationQueueGroupPolyphony PolyphonyMode; /* 0x0018 */
  FB_UINT32 Polyphony; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverConversationQueueGroup) == 32);

}
