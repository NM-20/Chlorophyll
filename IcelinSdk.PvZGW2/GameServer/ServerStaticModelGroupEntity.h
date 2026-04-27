#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerPhysicsEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C02
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02F8
   VfTable:          0000000000000000
   Address (Base):   00000001430F4370
*/
class ServerStaticModelGroupEntity : public ServerPhysicsEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0070[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */

static_assert(sizeof(ServerStaticModelGroupEntity) == 192);

}
