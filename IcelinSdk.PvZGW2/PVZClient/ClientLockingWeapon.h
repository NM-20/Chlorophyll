#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/ClientWeapon.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BA8
   TypeInfo Kind:    ClassInfo
   ClassId:          00F8
   VfTable:          0000000000000000
   Address (Base):   0000000143120B60
*/
class ClientLockingWeapon : public ClientWeapon
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_1020[0x0080];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x10A0 */

static_assert(sizeof(ClientLockingWeapon) == 4256);

}
