#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatCategoriesBaseTree.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869CC8
   RuntimeId:        2513
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0775
   VfTable:          0000000142355850
   Address (Base):   00000001430F81D0
*/
#pragma pack(push, 8)
class StatCategoriesScoreboardPositionTree : public StatCategoriesBaseTree
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(StatCategoriesScoreboardPositionTree) == 56);

}
