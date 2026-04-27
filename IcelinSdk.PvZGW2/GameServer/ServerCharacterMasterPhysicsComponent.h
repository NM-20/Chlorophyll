#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/CharacterPhysicsComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C56
   TypeInfo Kind:    ClassInfo
   ClassId:          021C
   VfTable:          0000000000000000
   Address (Base):   00000001430BEB30
*/
class ServerCharacterMasterPhysicsComponent : public CharacterPhysicsComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0090[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */

static_assert(sizeof(ServerCharacterMasterPhysicsComponent) == 160);

}
