#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F0F
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04DB
   VfTable:          0000000000000000
   Address (Base):   000000014312DF90
*/
class ServerBehaviorTriggerEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */

static_assert(sizeof(ServerBehaviorTriggerEntity) == 88);

}
