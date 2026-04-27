#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsBody.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        153D
   TypeInfo Kind:    EntityClassInfo
   ClassId:          03F5
   VfTable:          0000000000000000
   Address (Base):   00000001430D8270
*/
class CharacterPhysicsBody : public PhysicsBody
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */

static_assert(sizeof(CharacterPhysicsBody) == 72);

}
