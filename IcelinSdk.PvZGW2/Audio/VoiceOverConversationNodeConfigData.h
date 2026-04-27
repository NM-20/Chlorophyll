#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverNodeConfigData.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverContainerConditionMode.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverConversationInfo.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838930
   RuntimeId:        0602
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          117E
   VfTable:          00000001421F9648
   Address (Base):   00000001431166B0
*/
#pragma pack(push, 8)
class VoiceOverConversationNodeConfigData : public VoiceOverNodeConfigData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  VoiceOverContainerConditionMode ConditionMode; /* 0x0018 */
  FB_FLOAT32 Probability; /* 0x001C */
  VoiceOverConversationInfo Conversation; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverConversationNodeConfigData) == 80);

}
