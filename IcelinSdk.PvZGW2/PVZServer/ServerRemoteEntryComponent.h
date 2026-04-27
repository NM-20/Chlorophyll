#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/ServerPVZVehicleEntryComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EDF
   TypeInfo Kind:    ClassInfo
   ClassId:          0200
   VfTable:          0000000000000000
   Address (Base):   00000001430DDA10
*/
class ServerRemoteEntryComponent : public ServerPVZVehicleEntryComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_01A0[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01B0 */

static_assert(sizeof(ServerRemoteEntryComponent) == 432);

}
