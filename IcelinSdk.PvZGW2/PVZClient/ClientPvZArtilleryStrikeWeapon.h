#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/ClientWeapon.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BAA
   TypeInfo Kind:    ClassInfo
   ClassId:          00F9
   VfTable:          0000000000000000
   Address (Base):   0000000143120B10
*/
class ClientPvZArtilleryStrikeWeapon : public ClientWeapon
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x1020 */

static_assert(sizeof(ClientPvZArtilleryStrikeWeapon) == 4128);

}
