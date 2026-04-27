#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/ServerWeapon.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F69
   TypeInfo Kind:    ClassInfo
   ClassId:          00EC
   VfTable:          0000000000000000
   Address (Base):   000000014311E080
*/
class ServerExitDeployWeapon : public ServerWeapon
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_04D0[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x04E0 */

static_assert(sizeof(ServerExitDeployWeapon) == 1248);

}
