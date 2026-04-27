#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/ServerObjectDeployWeapon.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F68
   TypeInfo Kind:    ClassInfo
   ClassId:          00EE
   VfTable:          0000000000000000
   Address (Base):   0000000143120520
*/
class ServerCharacterDeployWeapon : public ServerObjectDeployWeapon
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0500[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0510 */

static_assert(sizeof(ServerCharacterDeployWeapon) == 1296);

}
