#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATConditionNode.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATComparator.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832258
   RuntimeId:        001A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F4C
   VfTable:          00000001421E3338
   Address (Base):   000000014311DC10
*/
#pragma pack(push, 8)
class ATCompareFloatRangeCondition : public ATConditionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ATFloatInput) Value; /* 0x0020 */
  ATComparator MinComparator; /* 0x0028 */
  char pad_002C[0x0004];
  FB_HANDLE(class ATFloatInput) MinValue; /* 0x0030 */
  ATComparator MaxComparator; /* 0x0038 */
  char pad_003C[0x0004];
  FB_HANDLE(class ATFloatInput) MaxValue; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(ATCompareFloatRangeCondition) == 72);

}
