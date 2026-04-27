#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834278
   RuntimeId:        01AF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          076C
   VfTable:          00000001421EB690
   Address (Base):   000000014311C230
*/
#pragma pack(push, 8)
class BehaviorTreeData : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BTNodeData) Root; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BehaviorTreeData) == 32);

}
