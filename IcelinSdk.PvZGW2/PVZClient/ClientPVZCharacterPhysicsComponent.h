#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientCharacterMasterPhysicsComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BF4
   TypeInfo Kind:    ClassInfo
   ClassId:          021F
   VfTable:          0000000000000000
   Address (Base):   00000001430CF090
*/
class ClientPVZCharacterPhysicsComponent : public ClientCharacterMasterPhysicsComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_00C0[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F0 */

static_assert(sizeof(ClientPVZCharacterPhysicsComponent) == 240);

}
