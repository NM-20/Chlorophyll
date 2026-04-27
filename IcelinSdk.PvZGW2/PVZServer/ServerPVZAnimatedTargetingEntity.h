#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F37
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0411
   VfTable:          0000000000000000
   Address (Base):   000000014312CC30
*/
class ServerPVZAnimatedTargetingEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x04B0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x04D0 */

static_assert(sizeof(ServerPVZAnimatedTargetingEntity) == 1232);

}
