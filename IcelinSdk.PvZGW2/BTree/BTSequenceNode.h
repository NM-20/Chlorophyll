#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTNodeDataWithChildren.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834378
   RuntimeId:        01BF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          128B
   VfTable:          00000001421EB5D0
   Address (Base):   000000014311BFF0
*/
#pragma pack(push, 8)
class BTSequenceNode : public BTNodeDataWithChildren
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BTSequenceNode) == 32);

}
