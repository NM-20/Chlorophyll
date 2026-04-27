#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerPhysicsEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C66
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02E1
   VfTable:          0000000000000000
   Address (Base):   00000001430B6B90
*/
class ServerControllableEntity : public ServerPhysicsEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0070[0x0180];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01F0 */

static_assert(sizeof(ServerControllableEntity) == 496);

}
