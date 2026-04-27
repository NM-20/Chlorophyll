#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatCategoriesBaseTree.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869D28
   RuntimeId:        2519
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0774
   VfTable:          0000000142355820
   Address (Base):   00000001430F8110
*/
#pragma pack(push, 8)
class StatCategoriesVehicleStateTypeTree : public StatCategoriesBaseTree
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(StatCategoriesVehicleStateTypeTree) == 56);

}
