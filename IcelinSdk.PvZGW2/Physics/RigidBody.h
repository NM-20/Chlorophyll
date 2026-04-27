#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsBody.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        153F
   TypeInfo Kind:    EntityClassInfo
   ClassId:          03F1
   VfTable:          0000000000000000
   Address (Base):   00000001430BDAD0
*/
class RigidBody : public PhysicsBody
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0048[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */

static_assert(sizeof(RigidBody) == 80);

}
