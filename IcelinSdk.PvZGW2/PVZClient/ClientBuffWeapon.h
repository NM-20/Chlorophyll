#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/ClientWeapon.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CBD
   TypeInfo Kind:    ClassInfo
   ClassId:          00FB
   VfTable:          0000000000000000
   Address (Base):   000000014311E3A0
*/
class ClientBuffWeapon : public ClientWeapon
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_1020[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x1030 */

static_assert(sizeof(ClientBuffWeapon) == 4144);

}
