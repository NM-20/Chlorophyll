#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverNode.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverLogicFlowMode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838720
   RuntimeId:        05E4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DE7
   VfTable:          00000001421F9710
   Address (Base):   00000001430D7F90
*/
#pragma pack(push, 8)
class VoiceOverStructureNode : public VoiceOverNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  VoiceOverLogicFlowMode FlowMode; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverStructureNode) == 24);

}
