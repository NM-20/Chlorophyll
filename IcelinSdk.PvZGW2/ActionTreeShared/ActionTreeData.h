#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832B08
   RuntimeId:        00A4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0769
   VfTable:          00000001421E2E58
   Address (Base):   0000000143101350
*/
#pragma pack(push, 8)
class ActionTreeData : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ATBranch) Root; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ActionTreeData) == 32);

}
