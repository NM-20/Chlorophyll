#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/ServerWeapon.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F70
   TypeInfo Kind:    ClassInfo
   ClassId:          00E6
   VfTable:          0000000000000000
   Address (Base):   00000001431203E0
*/
class ServerPVZLaserWeapon : public ServerWeapon
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_04D0[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0500 */

static_assert(sizeof(ServerPVZLaserWeapon) == 1280);

}
