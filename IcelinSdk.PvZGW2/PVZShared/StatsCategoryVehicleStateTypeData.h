#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatsCategoryBaseData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869D08
   RuntimeId:        2517
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EB6
   VfTable:          0000000142355830
   Address (Base):   00000001430F8170
*/
#pragma pack(push, 8)
class StatsCategoryVehicleStateTypeData : public StatsCategoryBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(enum VehicleStateType) States; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(StatsCategoryVehicleStateTypeData) == 64);

}
