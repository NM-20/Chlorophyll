#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTNodeDataWithChildren.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834338
   RuntimeId:        01BB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          128C
   VfTable:          00000001421EB600
   Address (Base):   000000014311C0B0
*/
#pragma pack(push, 8)
class BTSelectorNode : public BTNodeDataWithChildren
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BTSelectorNode) == 32);

}
