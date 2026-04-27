#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTNodeDataWithChildren.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834318
   RuntimeId:        01B9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1289
   VfTable:          00000001421EB618
   Address (Base):   000000014311C110
*/
#pragma pack(push, 8)
class BTInvertNode : public BTNodeDataWithChildren
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BTInvertNode) == 32);

}
