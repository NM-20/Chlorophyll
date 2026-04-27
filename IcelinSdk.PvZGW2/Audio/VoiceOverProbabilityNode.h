#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverExpressionNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838680
   RuntimeId:        05DA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DDD
   VfTable:          00000001421F9750
   Address (Base):   00000001430FF2B0
*/
#pragma pack(push, 8)
class VoiceOverProbabilityNode : public VoiceOverExpressionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class VoiceOverValue) False; /* 0x0010 */
  FB_HANDLE(class VoiceOverValue) True; /* 0x0018 */
  FB_FLOAT32 Probability; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverProbabilityNode) == 40);

}
