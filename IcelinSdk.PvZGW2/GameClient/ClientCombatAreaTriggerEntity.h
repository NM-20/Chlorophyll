#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B07
   TypeInfo Kind:    EntityClassInfo
   ClassId:          048A
   VfTable:          0000000000000000
   Address (Base):   0000000143122F00
*/
class ClientCombatAreaTriggerEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x00D0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F0 */

static_assert(sizeof(ClientCombatAreaTriggerEntity) == 240);

}
