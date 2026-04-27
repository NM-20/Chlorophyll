#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F5E
   TypeInfo Kind:    EntityClassInfo
   ClassId:          03BD
   VfTable:          0000000000000000
   Address (Base):   0000000143123540
*/
class ServerPVZPreRoundEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x00B0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */

static_assert(sizeof(ServerPVZPreRoundEntity) == 208);

}
