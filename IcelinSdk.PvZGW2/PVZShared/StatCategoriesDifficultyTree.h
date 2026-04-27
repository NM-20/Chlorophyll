#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatCategoriesGuidTree.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869BE8
   RuntimeId:        2505
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0777
   VfTable:          0000000142355970
   Address (Base):   0000000143107230
*/
#pragma pack(push, 8)
class StatCategoriesDifficultyTree : public StatCategoriesGuidTree
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(StatCategoriesDifficultyTree) == 56);

}
