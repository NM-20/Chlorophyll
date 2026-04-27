#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATGraph.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832378
   RuntimeId:        002C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EE4
   VfTable:          00000001421E32A0
   Address (Base):   000000014311D9D0
*/
#pragma pack(push, 8)
class ATConditionGraph : public ATGraph
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class ATConditionNode) Conditions; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ATConditionGraph) == 24);

}
