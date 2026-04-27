#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerPlayerEntryComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C74
   TypeInfo Kind:    ClassInfo
   ClassId:          01FE
   VfTable:          0000000000000000
   Address (Base):   00000001430B6B40
*/
class ServerVehicleEntryComponent : public ServerPlayerEntryComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_00E0[0x0098];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0178 */

static_assert(sizeof(ServerVehicleEntryComponent) == 376);

}
