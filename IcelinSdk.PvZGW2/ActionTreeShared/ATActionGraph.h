#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATGraph.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832398
   RuntimeId:        002E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EE5
   VfTable:          00000001421E3290
   Address (Base):   000000014311D970
*/
#pragma pack(push, 8)
class ATActionGraph : public ATGraph
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class ATActionNode) Actions; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ATActionGraph) == 24);

}
