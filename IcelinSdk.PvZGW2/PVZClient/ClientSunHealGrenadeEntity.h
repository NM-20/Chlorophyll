#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/ClientGrenadeEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CBA
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02CB
   VfTable:          0000000000000000
   Address (Base):   0000000143123900
*/
class ClientSunHealGrenadeEntity : public ClientGrenadeEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0420 */

static_assert(sizeof(ClientSunHealGrenadeEntity) == 1056);

}
