#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CAF
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0514
   VfTable:          0000000000000000
   Address (Base):   000000014312FB10
*/
class ClientPVZPreRoundEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0058];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */

static_assert(sizeof(ClientPVZPreRoundEntity) == 120);

}
