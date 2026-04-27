#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C31
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0290
   VfTable:          0000000000000000
   Address (Base):   0000000143133F30
*/
class ClientTeamLifeCounterEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0280];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x02A0 */

static_assert(sizeof(ClientTeamLifeCounterEntity) == 672);

}
