#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/ClientPVZCharacterWeapon.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BA7
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02B5
   VfTable:          0000000000000000
   Address (Base):   0000000143123CC0
*/
class ClientLaserPVZCharacterWeapon : public ClientPVZCharacterWeapon
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0270[0x0110];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0380 */

static_assert(sizeof(ClientLaserPVZCharacterWeapon) == 896);

}
