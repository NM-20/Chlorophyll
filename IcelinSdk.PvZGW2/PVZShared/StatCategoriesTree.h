#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatCategoriesBaseTree.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869EC8
   RuntimeId:        2533
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0773
   VfTable:          0000000142355810
   Address (Base):   0000000143106E70
*/
#pragma pack(push, 8)
class StatCategoriesTree : public StatCategoriesBaseTree
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class StatsCategoryData) Categories; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(StatCategoriesTree) == 64);

}
