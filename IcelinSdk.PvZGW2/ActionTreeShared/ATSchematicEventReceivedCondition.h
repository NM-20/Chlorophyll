#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATConditionNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832CE8
   RuntimeId:        00C2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F4F
   VfTable:          00000001421E2D48
   Address (Base):   000000014311C7D0
*/
#pragma pack(push, 8)
class ATSchematicEventReceivedCondition : public ATConditionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SchematicTreeInputEvent) Event; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ATSchematicEventReceivedCondition) == 40);

}
