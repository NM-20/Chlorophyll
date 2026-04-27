#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatCategoriesGuidTree.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869B28
   RuntimeId:        24F9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          077F
   VfTable:          0000000142355920
   Address (Base):   0000000143107470
*/
#pragma pack(push, 8)
class StatCategoriesWeaponTree : public StatCategoriesGuidTree
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(StatCategoriesWeaponTree) == 56);

}
