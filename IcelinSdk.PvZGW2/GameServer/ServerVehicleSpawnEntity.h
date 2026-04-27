#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerSpawnEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C78
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02AB
   VfTable:          0000000000000000
   Address (Base):   00000001430F4230
*/
class ServerVehicleSpawnEntity : public ServerSpawnEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_02A8[0x0028];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x02D0 */

static_assert(sizeof(ServerVehicleSpawnEntity) == 720);

}
