#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatCategoriesGuidTree.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869DE8
   RuntimeId:        2525
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          077D
   VfTable:          0000000142355860
   Address (Base):   0000000143106F90
*/
#pragma pack(push, 8)
class StatCategoriesPrestigeLevelTree : public StatCategoriesGuidTree
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(StatCategoriesPrestigeLevelTree) == 56);

}
