#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTNodeDataWithChildren.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834398
   RuntimeId:        01C1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          128F
   VfTable:          00000001421EB5B8
   Address (Base):   000000014311BF90
*/
#pragma pack(push, 8)
class BTConcurrentNode : public BTNodeDataWithChildren
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BTConcurrentNode) == 32);

}
