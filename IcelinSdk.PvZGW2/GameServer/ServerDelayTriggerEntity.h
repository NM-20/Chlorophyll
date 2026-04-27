#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerTriggerEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C7F
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04C3
   VfTable:          0000000000000000
   Address (Base):   000000014313A3D0
*/
class ServerDelayTriggerEntity : public ServerTriggerEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */

static_assert(sizeof(ServerDelayTriggerEntity) == 104);

}
