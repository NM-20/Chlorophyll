#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838240
   RuntimeId:        0596
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DDB
   VfTable:          00000001421F9920
   Address (Base):   00000001430BD0F0
*/
#pragma pack(push, 8)
class VoiceOverExpressionNode : public VoiceOverNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverExpressionNode) == 16);

}
