#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverStructureNode.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverValueConnection.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverContainerConditionMode.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverConversationInfo.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838910
   RuntimeId:        0600
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DE9
   VfTable:          00000001421F9658
   Address (Base):   00000001430FF190
*/
#pragma pack(push, 8)
class VoiceOverConversationNode : public VoiceOverStructureNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct VoiceOverValueConnection) Condition; /* 0x0018 */
  VoiceOverValueConnection PronunciationIndex; /* 0x0020 */
  FB_HANDLE(class VoiceOverIntervalNode) Interval; /* 0x0030 */
  FB_REFARRAY(class VoiceOverStructureNode) FinishedRelationship; /* 0x0038 */
  FB_REFARRAY(class VoiceOverStructureNode) BlockedRelationship; /* 0x0040 */
  VoiceOverContainerConditionMode ConditionMode; /* 0x0048 */
  FB_FLOAT32 Probability; /* 0x004C */
  VoiceOverConversationInfo Conversation; /* 0x0050 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverConversationNode) == 128);

}
