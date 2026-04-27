#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverExpressionNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838460
   RuntimeId:        05B8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DE2
   VfTable:          00000001421F9840
   Address (Base):   00000001430FF550
*/
#pragma pack(push, 8)
class VoiceOverConstantNode : public VoiceOverExpressionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class VoiceOverValue) Value; /* 0x0010 */
  FB_HANDLE(class VoiceOverConstantValue) Source; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverConstantNode) == 32);

}
