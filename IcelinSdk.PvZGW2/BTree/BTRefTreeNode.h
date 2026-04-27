#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTNodeData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428343B8
   RuntimeId:        01C3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1287
   VfTable:          00000001421EB5A0
   Address (Base):   0000000143100F30
*/
#pragma pack(push, 8)
class BTRefTreeNode : public BTNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BehaviorTreeData) SubTree; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BTRefTreeNode) == 32);

}
