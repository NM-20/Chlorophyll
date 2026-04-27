#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZInteractionData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863A68
   RuntimeId:        2143
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10FD
   VfTable:          0000000142353678
   Address (Base):   00000001430F8470
*/
#pragma pack(push, 8)
class PVZEnterVehicleInteractionData : public PVZInteractionData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PVZEnterVehicleInteractionData) == 40);

}
