#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B630
   RuntimeId:        2638
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0720
   VfTable:          000000014235AC28
   Address (Base):   0000000143106810
*/
#pragma pack(push, 8)
class AIGlobalConfiguration : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class DesignerEnumeration) InterestTypes; /* 0x0018 */
  FB_HANDLE(class DesignerEnumeration) AIFilters; /* 0x0020 */
  FB_HANDLE(class DesignerEnumeration) BTTimerNames; /* 0x0028 */
  FB_HANDLE(class DesignerEnumeration) BTParameterNames; /* 0x0030 */
  FB_HANDLE(class BehaviorTreeData) DoNothingBehavior; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(AIGlobalConfiguration) == 64);

}
