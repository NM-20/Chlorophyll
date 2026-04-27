#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerPhysicsEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BFE
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02E5
   VfTable:          0000000000000000
   Address (Base):   00000001430DFCC0
*/
class ServerBangerEntity : public ServerPhysicsEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0070[0x01B0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0220 */

static_assert(sizeof(ServerBangerEntity) == 544);

}
