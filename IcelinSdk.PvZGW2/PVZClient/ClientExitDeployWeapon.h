#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/ClientWeapon.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CBF
   TypeInfo Kind:    ClassInfo
   ClassId:          00FC
   VfTable:          0000000000000000
   Address (Base):   0000000143120840
*/
class ClientExitDeployWeapon : public ClientWeapon
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x1020 */

static_assert(sizeof(ClientExitDeployWeapon) == 4128);

}
