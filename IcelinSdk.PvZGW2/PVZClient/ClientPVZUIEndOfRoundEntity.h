#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C2D
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0572
   VfTable:          0000000000000000
   Address (Base):   00000001431341B0
*/
class ClientPVZUIEndOfRoundEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0200];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0220 */

static_assert(sizeof(ClientPVZUIEndOfRoundEntity) == 544);

}
