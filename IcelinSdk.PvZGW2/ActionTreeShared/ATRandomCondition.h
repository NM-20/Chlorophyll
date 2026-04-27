#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATConditionNode.h>

namespace fb
{

/* TypeInfo (Array): 00000001428322F8
   RuntimeId:        0024
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F4B
   VfTable:          00000001421E32C0
   Address (Base):   000000014311DA30
*/
#pragma pack(push, 8)
class ATRandomCondition : public ATConditionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 Weight; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ATRandomCondition) == 40);

}
