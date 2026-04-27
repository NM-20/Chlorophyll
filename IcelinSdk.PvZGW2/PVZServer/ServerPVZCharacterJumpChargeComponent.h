#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EF3
   TypeInfo Kind:    ClassInfo
   ClassId:          0202
   VfTable:          0000000000000000
   Address (Base):   00000001430DD740
*/
class ServerPVZCharacterJumpChargeComponent : public ServerGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */

static_assert(sizeof(ServerPVZCharacterJumpChargeComponent) == 104);

}
