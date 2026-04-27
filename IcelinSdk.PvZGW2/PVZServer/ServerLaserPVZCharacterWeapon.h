#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/ServerPVZCharacterWeapon.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F6B
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02DE
   VfTable:          0000000000000000
   Address (Base):   000000014312B330
*/
class ServerLaserPVZCharacterWeapon : public ServerPVZCharacterWeapon
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0178[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01B0 */

static_assert(sizeof(ServerLaserPVZCharacterWeapon) == 432);

}
