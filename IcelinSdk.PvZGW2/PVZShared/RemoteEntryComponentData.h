#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZVehicleEntryComponentData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428640D8
   RuntimeId:        21A9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D91
   VfTable:          00000001423529F8
   Address (Base):   00000001430D40F0
*/
#pragma pack(push, 16)
class RemoteEntryComponentData : public PVZVehicleEntryComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0140 */
#pragma pack(pop)

static_assert(sizeof(RemoteEntryComponentData) == 320);

}
