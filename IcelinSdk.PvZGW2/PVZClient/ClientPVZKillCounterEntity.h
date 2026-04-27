#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CA9
   TypeInfo Kind:    EntityClassInfo
   ClassId:          05BE
   VfTable:          0000000000000000
   Address (Base):   000000014312FED0
*/
class ClientPVZKillCounterEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0098];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B8 */

static_assert(sizeof(ClientPVZKillCounterEntity) == 184);

}
