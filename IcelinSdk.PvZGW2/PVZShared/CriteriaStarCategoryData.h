#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B6D0
   RuntimeId:        2642
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FC8
   VfTable:          000000014235AAD8
   Address (Base):   00000001431067B0
*/
#pragma pack(push, 8)
class CriteriaStarCategoryData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct CriteriaStarCategoryInstance) CriteriaInstances; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(CriteriaStarCategoryData) == 24);

}
