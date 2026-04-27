#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverStructureNode.h>

namespace fb
{

/* TypeInfo (Array): 00000001428389B0
   RuntimeId:        060A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DE8
   VfTable:          00000001421F9608
   Address (Base):   00000001430FF0D0
*/
#pragma pack(push, 8)
class VoiceOverTriggerNode : public VoiceOverStructureNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class VoiceOverTriggerParameter) Parameters; /* 0x0018 */
  FB_FLOAT32 Delay; /* 0x0020 */
  char pad_0024[0x0004];
  FB_HANDLE(class VoiceOverEvent) Event; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverTriggerNode) == 48);

}
