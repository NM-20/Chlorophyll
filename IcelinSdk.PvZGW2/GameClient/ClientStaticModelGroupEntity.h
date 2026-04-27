#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientPhysicsEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        09F0
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02B9
   VfTable:          0000000000000000
   Address (Base):   00000001430D83B0
*/
class ClientStaticModelGroupEntity : public ClientPhysicsEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0070[0x00A0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0110 */

static_assert(sizeof(ClientStaticModelGroupEntity) == 272);

}
