#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverStructureNode.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverContainerConditionMode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838760
   RuntimeId:        05E8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DEB
   VfTable:          00000001421F9700
   Address (Base):   00000001430FF1F0
*/
#pragma pack(push, 8)
class VoiceOverContainerNode : public VoiceOverStructureNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct VoiceOverValueConnection) Condition; /* 0x0018 */
  FB_HANDLE(class VoiceOverIntervalNode) Interval; /* 0x0020 */
  FB_REFARRAY(class VoiceOverStructureNode) TrueRelationship; /* 0x0028 */
  FB_REFARRAY(class VoiceOverStructureNode) FalseRelationship; /* 0x0030 */
  VoiceOverContainerConditionMode ConditionMode; /* 0x0038 */
  FB_FLOAT32 Probability; /* 0x003C */
  FB_BOOLEAN AlwaysResetInterval; /* 0x0040 */
  char pad_0041[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverContainerNode) == 72);

}
