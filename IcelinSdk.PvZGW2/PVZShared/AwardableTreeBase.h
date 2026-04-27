#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/TreeBase.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B900
   RuntimeId:        2664
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0784
   VfTable:          000000014235AA90
   Address (Base):   00000001430F78D0
*/
#pragma pack(push, 8)
class AwardableTreeBase : public TreeBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class StatCategoryTreeCollection) StatCategoryTreeCollection; /* 0x0018 */
  FB_REFARRAY(class CriteriaData) GeneralCriteria; /* 0x0020 */
  FB_BOOLEAN GeneralStatistics; /* 0x0028 */
  char pad_0029[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(AwardableTreeBase) == 48);

}
