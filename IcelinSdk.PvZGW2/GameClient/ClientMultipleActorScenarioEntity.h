#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0AEE
   TypeInfo Kind:    EntityClassInfo
   ClassId:          040E
   VfTable:          0000000000000000
   Address (Base):   000000014313C270
*/
class ClientMultipleActorScenarioEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x01A0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01C0 */

static_assert(sizeof(ClientMultipleActorScenarioEntity) == 448);

}
