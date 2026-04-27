#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATConditionNode.h>

namespace fb
{

/* TypeInfo (Array): 00000001428322B8
   RuntimeId:        0020
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F49
   VfTable:          00000001421E32F0
   Address (Base):   000000014311DAF0
*/
#pragma pack(push, 8)
class ATNotCondition : public ATConditionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ATConditionArrayInput) Conditions; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ATNotCondition) == 40);

}
