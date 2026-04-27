#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F29
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0548
   VfTable:          0000000000000000
   Address (Base):   000000014312D310
*/
class ServerTeamLifeCounterEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x02A0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x02C0 */

static_assert(sizeof(ServerTeamLifeCounterEntity) == 704);

}
