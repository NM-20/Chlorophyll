#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869E48
   RuntimeId:        252B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07F7
   VfTable:          00000001423557B0
   Address (Base):   0000000143106F30
*/
#pragma pack(push, 8)
class StatCategoryTreeCollection : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class StatCategoriesBaseTree) CategoryTrees; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(StatCategoryTreeCollection) == 32);

}
