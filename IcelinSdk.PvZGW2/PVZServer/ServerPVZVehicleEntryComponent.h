#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerVehicleEntryComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F65
   TypeInfo Kind:    ClassInfo
   ClassId:          01FF
   VfTable:          0000000000000000
   Address (Base):   00000001430CED70
*/
class ServerPVZVehicleEntryComponent : public ServerVehicleEntryComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0178[0x0028];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01A0 */

static_assert(sizeof(ServerPVZVehicleEntryComponent) == 416);

}
