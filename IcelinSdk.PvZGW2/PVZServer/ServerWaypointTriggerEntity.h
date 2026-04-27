#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F87
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0424
   VfTable:          0000000000000000
   Address (Base):   000000014312B290
*/
class ServerWaypointTriggerEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0058];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */

static_assert(sizeof(ServerWaypointTriggerEntity) == 120);

}
