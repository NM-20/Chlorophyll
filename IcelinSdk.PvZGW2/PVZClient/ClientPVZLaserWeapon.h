#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/ClientWeapon.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BAC
   TypeInfo Kind:    ClassInfo
   ClassId:          00F7
   VfTable:          0000000000000000
   Address (Base):   0000000143120AC0
*/
class ClientPVZLaserWeapon : public ClientWeapon
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_1020[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x1070 */

static_assert(sizeof(ClientPVZLaserWeapon) == 4208);

}
