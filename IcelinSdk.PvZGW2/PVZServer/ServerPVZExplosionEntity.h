#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerExplosionEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EEA
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0292
   VfTable:          0000000000000000
   Address (Base):   000000014312E850
*/
class ServerPVZExplosionEntity : public ServerExplosionEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0180[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0190 */

static_assert(sizeof(ServerPVZExplosionEntity) == 400);

}
