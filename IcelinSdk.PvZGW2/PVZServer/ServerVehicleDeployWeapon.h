#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/ServerWeapon.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EC5
   TypeInfo Kind:    ClassInfo
   ClassId:          00F1
   VfTable:          0000000000000000
   Address (Base):   0000000143120610
*/
class ServerVehicleDeployWeapon : public ServerWeapon
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_04D0[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0510 */

static_assert(sizeof(ServerVehicleDeployWeapon) == 1296);

}
