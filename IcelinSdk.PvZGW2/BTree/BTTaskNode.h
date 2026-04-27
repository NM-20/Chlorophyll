#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTNodeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834298
   RuntimeId:        01B1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1286
   VfTable:          00000001421EB678
   Address (Base):   000000014311C1D0
*/
#pragma pack(push, 8)
class BTTaskNode : public BTNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BTTaskFunc) Task; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BTTaskNode) == 32);

}
