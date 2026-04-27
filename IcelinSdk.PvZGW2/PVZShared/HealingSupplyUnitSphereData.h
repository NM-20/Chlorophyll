#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/SupplyUnitSphereData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DC18
   RuntimeId:        284C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          087E
   VfTable:          000000014236EAA0
   Address (Base):   0000000143105790
*/
#pragma pack(push, 8)
class HealingSupplyUnitSphereData : public SupplyUnitSphereData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 DistributeHealingOverTime; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(HealingSupplyUnitSphereData) == 56);

}
