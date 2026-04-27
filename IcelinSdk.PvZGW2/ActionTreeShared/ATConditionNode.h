#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATNode.h>

namespace fb
{

/* TypeInfo (Array): 00000001428323F8
   RuntimeId:        0034
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F46
   VfTable:          00000001421E3248
   Address (Base):   00000001430BD7E0
*/
#pragma pack(push, 8)
class ATConditionNode : public ATNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN Disabled; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ATConditionNode) == 32);

}
