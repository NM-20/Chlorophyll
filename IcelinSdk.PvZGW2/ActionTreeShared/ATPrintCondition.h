#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATConditionNode.h>

namespace fb
{

/* TypeInfo (Array): 00000001428321B8
   RuntimeId:        0010
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F4A
   VfTable:          00000001421E33B0
   Address (Base):   000000014311DDF0
*/
#pragma pack(push, 8)
class ATPrintCondition : public ATConditionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Text; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ATPrintCondition) == 40);

}
