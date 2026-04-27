#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATActionNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832138
   RuntimeId:        0008
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F2E
   VfTable:          00000001421E3410
   Address (Base):   000000014311DF70
*/
#pragma pack(push, 8)
class ATExecuteAction : public ATActionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ATBranchReference) Branch; /* 0x0028 */
  FB_HANDLE(class ATConditionInput) If; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ATExecuteAction) == 56);

}
