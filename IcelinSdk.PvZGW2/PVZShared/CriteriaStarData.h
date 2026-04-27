#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/CriteriaData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B6F0
   RuntimeId:        2644
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          113C
   VfTable:          000000014235AAC8
   Address (Base):   0000000143106750
*/
#pragma pack(push, 8)
class CriteriaStarData : public CriteriaData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class CriteriaStarCategoryData) StarTemplate; /* 0x0068 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(CriteriaStarData) == 112);

}
