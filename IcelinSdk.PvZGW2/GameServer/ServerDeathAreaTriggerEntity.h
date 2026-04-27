#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerTriggerEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C7E
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04C9
   VfTable:          0000000000000000
   Address (Base):   000000014313A470
*/
class ServerDeathAreaTriggerEntity : public ServerTriggerEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0068[0x0028];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */

static_assert(sizeof(ServerDeathAreaTriggerEntity) == 144);

}
