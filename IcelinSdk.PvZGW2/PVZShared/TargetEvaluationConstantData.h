#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428737A8
   RuntimeId:        2BEA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0808
   VfTable:          00000001423791B0
   Address (Base):   0000000143104590
*/
#pragma pack(push, 8)
class TargetEvaluationConstantData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 DefaultHumanTargetPreference; /* 0x0018 */
  FB_FLOAT32 TargetFlipFactorUsage; /* 0x001C */
  FB_STDARRAY(FB_FLOAT32) RangePriorities; /* 0x0020 */
  FB_STDARRAY(struct AITypeFilterWrapper) TypeFilters; /* 0x0028 */
  FB_FLOAT32 RangeAggroMax; /* 0x0030 */
  FB_FLOAT32 TypeAggroMax; /* 0x0034 */
  FB_FLOAT32 DistanceAggroMax; /* 0x0038 */
  FB_FLOAT32 OverWeightAggroMultiplier; /* 0x003C */
  FB_FLOAT32 MaintainCurrentTargetMultiplier; /* 0x0040 */
  FB_FLOAT32 UnreachableAggroMultiplier; /* 0x0044 */
  FB_FLOAT32 AttackingPlayerAggroMultiplier; /* 0x0048 */
  FB_FLOAT32 CapturingZoneAggroMultiplier; /* 0x004C */
  FB_FLOAT32 TacoHolderAggroMultiplier; /* 0x0050 */
  char pad_0054[0x0004];
  FB_HANDLE(class AITypeFilterList) FilterListOverride; /* 0x0058 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(TargetEvaluationConstantData) == 96);

}
