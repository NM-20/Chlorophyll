#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/TreeNodeBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869E08
   RuntimeId:        2527
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EA7
   VfTable:          00000001423557C0
   Address (Base):   00000001430BDEF0
*/
#pragma pack(push, 8)
class StatsCategoryBaseData : public TreeNodeBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class StatsCategoryBaseData) BaseSubCategories; /* 0x0018 */
  FB_CSTRING Code; /* 0x0020 */
  FB_REFARRAY(class CriteriaData) ParamX; /* 0x0028 */
  FB_REFARRAY(class CriteriaData) ParamY; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(StatsCategoryBaseData) == 56);

}
