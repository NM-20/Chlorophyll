#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATConditionNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832298
   RuntimeId:        001E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F4D
   VfTable:          00000001421E3308
   Address (Base):   000000014311DB50
*/
#pragma pack(push, 8)
class ATAndCondition : public ATConditionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ATConditionArrayInput) Conditions; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ATAndCondition) == 40);

}
