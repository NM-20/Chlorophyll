#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/ClientWeapon.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BA9
   TypeInfo Kind:    ClassInfo
   ClassId:          00F5
   VfTable:          0000000000000000
   Address (Base):   00000001431017D0
*/
class ClientObjectDeployWeapon : public ClientWeapon
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_1020[0x0070];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x1090 */

static_assert(sizeof(ClientObjectDeployWeapon) == 4240);

}
