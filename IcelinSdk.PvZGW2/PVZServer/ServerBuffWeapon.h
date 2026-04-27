#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/ServerWeapon.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F67
   TypeInfo Kind:    ClassInfo
   ClassId:          00E9
   VfTable:          0000000000000000
   Address (Base):   00000001430D1B10
*/
class ServerBuffWeapon : public ServerWeapon
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_04D0[0x0020];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x04F0 */

static_assert(sizeof(ServerBuffWeapon) == 1264);

}
