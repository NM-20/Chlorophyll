#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATConditionNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832278
   RuntimeId:        001C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F50
   VfTable:          00000001421E3320
   Address (Base):   000000014311DBB0
*/
#pragma pack(push, 8)
class ATOrCondition : public ATConditionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ATConditionArrayInput) Conditions; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ATOrCondition) == 40);

}
