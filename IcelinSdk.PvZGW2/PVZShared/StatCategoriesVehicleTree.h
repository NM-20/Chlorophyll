#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatCategoriesGuidTree.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869B68
   RuntimeId:        24FD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0778
   VfTable:          00000001423558E0
   Address (Base):   00000001431073B0
*/
#pragma pack(push, 8)
class StatCategoriesVehicleTree : public StatCategoriesGuidTree
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(StatCategoriesVehicleTree) == 56);

}
