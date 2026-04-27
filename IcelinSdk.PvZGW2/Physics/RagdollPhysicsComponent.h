#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1536
   TypeInfo Kind:    ClassInfo
   ClassId:          021A
   VfTable:          0000000000000000
   Address (Base):   00000001430B7B70
*/
class RagdollPhysicsComponent : public PhysicsComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0068[0x0198];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0200 */

static_assert(sizeof(RagdollPhysicsComponent) == 512);

}
