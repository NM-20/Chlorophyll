#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerPhysicsEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EC2
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02E9
   VfTable:          0000000000000000
   Address (Base):   00000001430F44B0
*/
class ServerProjectileEntity : public ServerPhysicsEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0070[0x0130];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01A0 */

static_assert(sizeof(ServerProjectileEntity) == 416);

}
