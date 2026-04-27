#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/ServerWeaponComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F66
   TypeInfo Kind:    ClassInfo
   ClassId:          01BD
   VfTable:          0000000000000000
   Address (Base):   00000001430DD5B0
*/
class ServerPVZVehicleWeaponComponent : public ServerWeaponComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0170[0x00A0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0210 */

static_assert(sizeof(ServerPVZVehicleWeaponComponent) == 528);

}
