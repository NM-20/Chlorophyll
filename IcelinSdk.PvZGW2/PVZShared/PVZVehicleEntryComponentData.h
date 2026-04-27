#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/VehicleEntryComponentData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428640B8
   RuntimeId:        21A7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D90
   VfTable:          0000000142352BE8
   Address (Base):   00000001430D0380
*/
#pragma pack(push, 16)
class PVZVehicleEntryComponentData : public VehicleEntryComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0140 */
#pragma pack(pop)

static_assert(sizeof(PVZVehicleEntryComponentData) == 320);

}
