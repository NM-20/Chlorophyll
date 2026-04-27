#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/ServerWeapon.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F6C
   TypeInfo Kind:    ClassInfo
   ClassId:          00EA
   VfTable:          0000000000000000
   Address (Base):   0000000143120480
*/
class ServerLockingWeapon : public ServerWeapon
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_04D0[0x00B0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0580 */

static_assert(sizeof(ServerLockingWeapon) == 1408);

}
