#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameComponentEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F21
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02DB
   VfTable:          0000000000000000
   Address (Base):   000000014312D770
*/
class ServerPVZCommanderEntity : public ServerGameComponentEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0060[0x0298];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x02F8 */

static_assert(sizeof(ServerPVZCommanderEntity) == 760);

}
