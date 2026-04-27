#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerDamageAreaTriggerEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F43
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04C2
   VfTable:          0000000000000000
   Address (Base):   000000014312C550
*/
class ServerPVZDamageAreaTriggerEntity : public ServerDamageAreaTriggerEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */

static_assert(sizeof(ServerPVZDamageAreaTriggerEntity) == 120);

}
