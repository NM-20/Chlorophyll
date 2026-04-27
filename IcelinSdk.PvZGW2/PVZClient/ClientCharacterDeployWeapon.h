#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/ClientObjectDeployWeapon.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CBE
   TypeInfo Kind:    ClassInfo
   ClassId:          00F6
   VfTable:          0000000000000000
   Address (Base):   0000000143120890
*/
class ClientCharacterDeployWeapon : public ClientObjectDeployWeapon
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x1090 */

static_assert(sizeof(ClientCharacterDeployWeapon) == 4240);

}
