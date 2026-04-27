#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponentEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A1D
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02B6
   VfTable:          0000000000000000
   Address (Base):   00000001430B75F0
*/
class ClientPhysicsEntity : public ClientGameComponentEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0060[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */

static_assert(sizeof(ClientPhysicsEntity) == 112);

}
