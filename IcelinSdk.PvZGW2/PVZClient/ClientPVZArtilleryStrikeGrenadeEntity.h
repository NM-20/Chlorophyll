#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/ClientGrenadeEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CB5
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02CA
   VfTable:          0000000000000000
   Address (Base):   0000000143123A40
*/
class ClientPVZArtilleryStrikeGrenadeEntity : public ClientGrenadeEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0420 */

static_assert(sizeof(ClientPVZArtilleryStrikeGrenadeEntity) == 1056);

}
