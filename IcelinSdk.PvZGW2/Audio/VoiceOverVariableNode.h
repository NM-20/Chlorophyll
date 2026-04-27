#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverExpressionNode.h>

namespace fb
{

/* TypeInfo (Array): 00000001428386C0
   RuntimeId:        05DE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DE1
   VfTable:          00000001421F9730
   Address (Base):   00000001430FF250
*/
#pragma pack(push, 8)
class VoiceOverVariableNode : public VoiceOverExpressionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class VoiceOverValue) Value; /* 0x0010 */
  FB_HANDLE(class VoiceOverNamedValue) Source; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverVariableNode) == 32);

}
