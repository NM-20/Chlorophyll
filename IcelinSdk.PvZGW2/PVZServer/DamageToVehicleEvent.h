#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/MetricEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142860528
   RuntimeId:        1E5E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          05F2
   VfTable:          0000000142320460
   Address (Base):   0000000143109DB0
*/
#pragma pack(push, 8)
class DamageToVehicleEvent : public MetricEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING VehicleName; /* 0x0018 */
  FB_CSTRING WeaponName; /* 0x0020 */
  FB_FLOAT32 DamageAmount; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(DamageToVehicleEvent) == 48);

}
