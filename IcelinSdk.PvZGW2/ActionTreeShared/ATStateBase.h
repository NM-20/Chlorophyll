#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATBranch.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832908
   RuntimeId:        0084
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F54
   VfTable:          00000001421E2FA8
   Address (Base):   00000001430F3540
*/
#pragma pack(push, 8)
class ATStateBase : public ATBranch
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ATConditionGraph) ConditionGraph; /* 0x0038 */
  FB_HANDLE(class ATActionGraph) ActionGraph; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(ATStateBase) == 72);

}
