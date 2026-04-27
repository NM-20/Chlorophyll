#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F12
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0500
   VfTable:          0000000000000000
   Address (Base):   00000001431235E0
*/
class ServerRewardDestructibleSpawnEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0270];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0290 */

static_assert(sizeof(ServerRewardDestructibleSpawnEntity) == 656);

}
