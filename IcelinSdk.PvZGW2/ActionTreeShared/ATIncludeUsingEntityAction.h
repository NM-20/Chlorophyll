#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATActionNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832178
   RuntimeId:        000C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F29
   VfTable:          00000001421E33E0
   Address (Base):   000000014311DEB0
*/
#pragma pack(push, 8)
class ATIncludeUsingEntityAction : public ATActionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ATEntityInput) Entity; /* 0x0028 */
  FB_HANDLE(class ATBranchReference) Branch; /* 0x0030 */
  FB_HANDLE(class ATConditionInput) If; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ATIncludeUsingEntityAction) == 64);

}
