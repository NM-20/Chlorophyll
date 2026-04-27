#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATConditionNode.h>

namespace fb
{

/* TypeInfo (Array): 00000001428322D8
   RuntimeId:        0022
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F4E
   VfTable:          00000001421E32D8
   Address (Base):   000000014311DA90
*/
#pragma pack(push, 8)
class ATFalseCondition : public ATConditionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ATFalseCondition) == 32);

}
