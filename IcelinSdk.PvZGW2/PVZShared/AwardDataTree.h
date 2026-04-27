#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/AwardableTreeBase.h>
#include <IcelinSdk.PvZGW2/PVZShared/CategorizedAwardData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B960
   RuntimeId:        2668
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0785
   VfTable:          000000014235AA80
   Address (Base):   00000001431065D0
*/
#pragma pack(push, 8)
class AwardDataTree : public AwardableTreeBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class AwardData) FilteredAwards; /* 0x0030 */
  CategorizedAwardData CategorizedAwards; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(AwardDataTree) == 88);

}
