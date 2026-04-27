#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1B96
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04F4
   VfTable:          0000000000000000
   Address (Base):   0000000143137590
*/
class ClientPVZUIHUDPropertyEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0490];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x04B0 */

static_assert(sizeof(ClientPVZUIHUDPropertyEntity) == 1200);

}
