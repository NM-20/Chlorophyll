#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientPhysicsEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2E1D
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02B8
   VfTable:          0000000000000000
   Address (Base):   00000001431226E0
*/
class ClientWaterInteractEntity : public ClientPhysicsEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0070[0x4780];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x47F0 */

static_assert(sizeof(ClientWaterInteractEntity) == 18416);

}
