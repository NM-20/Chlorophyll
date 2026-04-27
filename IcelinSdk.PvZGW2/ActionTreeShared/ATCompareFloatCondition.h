#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATConditionNode.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATComparator.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832238
   RuntimeId:        0018
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F48
   VfTable:          00000001421E3350
   Address (Base):   000000014311DC70
*/
#pragma pack(push, 8)
class ATCompareFloatCondition : public ATConditionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ATFloatInput) Value; /* 0x0020 */
  ATComparator Comparator; /* 0x0028 */
  char pad_002C[0x0004];
  FB_HANDLE(class ATFloatInput) TestValue; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ATCompareFloatCondition) == 56);

}
