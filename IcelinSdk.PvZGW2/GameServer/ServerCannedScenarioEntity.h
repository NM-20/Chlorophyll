#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0D15
   TypeInfo Kind:    EntityClassInfo
   ClassId:          05A1
   VfTable:          0000000000000000
   Address (Base):   0000000143138FD0
*/
class ServerCannedScenarioEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0210];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0230 */

static_assert(sizeof(ServerCannedScenarioEntity) == 560);

}
