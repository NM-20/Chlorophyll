#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/ServerGrenadeEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F63
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02F4
   VfTable:          0000000000000000
   Address (Base):   0000000143125070
*/
class ServerSunDropEntity : public ServerGrenadeEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0380[0x0020];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x03A0 */

static_assert(sizeof(ServerSunDropEntity) == 928);

}
