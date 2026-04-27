#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/MetricState.h>

namespace fb
{

/* TypeInfo (Array): 00000001428605C8
   RuntimeId:        1E68
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          05E7
   VfTable:          00000001423204D0
   Address (Base):   0000000143109BD0
*/
#pragma pack(push, 8)
class VehicleState : public MetricState
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING VehicleName; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(VehicleState) == 40);

}
