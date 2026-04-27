#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1E3B
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0317
   VfTable:          0000000000000000
   Address (Base):   00000001431237C0
*/
class ServerPlayableAreaTriggerEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0078];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0098 */

static_assert(sizeof(ServerPlayableAreaTriggerEntity) == 152);

}
