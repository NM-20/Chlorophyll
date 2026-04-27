#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerStaticModelEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C00
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02E7
   VfTable:          0000000000000000
   Address (Base):   0000000143127230
*/
class ServerLadderEntity : public ServerStaticModelEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */

static_assert(sizeof(ServerLadderEntity) == 256);

}
