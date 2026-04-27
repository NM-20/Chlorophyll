#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientPhysicsEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0AF7
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02D2
   VfTable:          0000000000000000
   Address (Base):   00000001430BCBF0
*/
class ClientControllableEntity : public ClientPhysicsEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0070[0x0168];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01D8 */

static_assert(sizeof(ClientControllableEntity) == 472);

}
