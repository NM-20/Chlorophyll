#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/TreeBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869EA8
   RuntimeId:        2531
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0772
   VfTable:          0000000142355790
   Address (Base):   00000001430D3B50
*/
#pragma pack(push, 8)
class StatCategoriesBaseTree : public TreeBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class StatsCategoryBaseData) RootBaseCategories; /* 0x0018 */
  FB_REFARRAY(class CriteriaData) ParamX; /* 0x0020 */
  FB_REFARRAY(class CriteriaData) ParamY; /* 0x0028 */
  FB_BOOLEAN ProcessAllLevelsInTree; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(StatCategoriesBaseTree) == 56);

}
