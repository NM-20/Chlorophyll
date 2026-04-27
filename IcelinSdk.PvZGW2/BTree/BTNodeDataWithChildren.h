#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTNodeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834258
   RuntimeId:        01AD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1288
   VfTable:          00000001421EB6A0
   Address (Base):   00000001430BE670
*/
#pragma pack(push, 8)
class BTNodeDataWithChildren : public BTNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class BTNodeData) Nodes; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BTNodeDataWithChildren) == 32);

}
