#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTNodeDataWithChildren.h>
#include <IcelinSdk.PvZGW2/BTree/EReturnValue.h>

namespace fb
{

/* TypeInfo (Array): 00000001428342F8
   RuntimeId:        01B7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          128E
   VfTable:          00000001421EB630
   Address (Base):   000000014311C170
*/
#pragma pack(push, 8)
class BTWrapperNode : public BTNodeDataWithChildren
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  EReturnValue ReturnValue; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(BTWrapperNode) == 40);

}
