#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerPhysicsEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2E1F
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02F9
   VfTable:          0000000000000000
   Address (Base):   0000000143124CB0
*/
class ServerWaterInteractEntity : public ServerPhysicsEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0070[0x0510];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0580 */

static_assert(sizeof(ServerWaterInteractEntity) == 1408);

}
