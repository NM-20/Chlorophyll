#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/ServerGrenadeEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EE8
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02F5
   VfTable:          0000000000000000
   Address (Base):   00000001431256B0
*/
class ServerPVZArtilleryStrikeGrenadeEntity : public ServerGrenadeEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0380[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x03D0 */

static_assert(sizeof(ServerPVZArtilleryStrikeGrenadeEntity) == 976);

}
