#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerTriggerEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C7B
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04C4
   VfTable:          0000000000000000
   Address (Base):   000000014313A510
*/
class ServerCombatActionTriggerEntity : public ServerTriggerEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0068[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */

static_assert(sizeof(ServerCombatActionTriggerEntity) == 120);

}
