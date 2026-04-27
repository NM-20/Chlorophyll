#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/ServerGrenadeEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F64
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02F6
   VfTable:          0000000000000000
   Address (Base):   0000000143124FD0
*/
class ServerSunHealGrenadeEntity : public ServerGrenadeEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0380[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0390 */

static_assert(sizeof(ServerSunHealGrenadeEntity) == 912);

}
