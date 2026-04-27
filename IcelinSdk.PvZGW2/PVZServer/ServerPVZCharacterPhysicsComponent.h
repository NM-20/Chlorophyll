#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerCharacterMasterPhysicsComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EDA
   TypeInfo Kind:    ClassInfo
   ClassId:          021D
   VfTable:          0000000000000000
   Address (Base):   00000001430CEEB0
*/
class ServerPVZCharacterPhysicsComponent : public ServerCharacterMasterPhysicsComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_00A0[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */

static_assert(sizeof(ServerPVZCharacterPhysicsComponent) == 208);

}
