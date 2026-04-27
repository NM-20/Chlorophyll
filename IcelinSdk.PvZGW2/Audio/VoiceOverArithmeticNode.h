#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverExpressionNode.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverValueConnection.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverArithmeticExpressionType.h>

namespace fb
{

/* TypeInfo (Array): 00000001428382E0
   RuntimeId:        05A0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DE5
   VfTable:          00000001421F98F0
   Address (Base):   00000001430FF7F0
*/
#pragma pack(push, 8)
class VoiceOverArithmeticNode : public VoiceOverExpressionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  VoiceOverValueConnection A; /* 0x0010 */
  VoiceOverValueConnection B; /* 0x0020 */
  FB_HANDLE(class VoiceOverValue) Result; /* 0x0030 */
  VoiceOverArithmeticExpressionType Operation; /* 0x0038 */
  char pad_003C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverArithmeticNode) == 64);

}
