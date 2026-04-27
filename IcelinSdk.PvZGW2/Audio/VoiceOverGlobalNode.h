#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverExpressionNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838520
   RuntimeId:        05C4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DE0
   VfTable:          00000001421F97E0
   Address (Base):   00000001430FF430
*/
#pragma pack(push, 8)
class VoiceOverGlobalNode : public VoiceOverExpressionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class VoiceOverValue) Value; /* 0x0010 */
  FB_HANDLE(class VoiceOverNamedValue) Field; /* 0x0018 */
  FB_HANDLE(class VoiceOverObject) Object; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverGlobalNode) == 40);

}
