#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerPhysicsEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C03
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02F7
   VfTable:          0000000000000000
   Address (Base):   00000001430F42D0
*/
class ServerTerrainEntity : public ServerPhysicsEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0070[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A8 */

static_assert(sizeof(ServerTerrainEntity) == 168);

}
