#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsBody.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        153C
   TypeInfo Kind:    EntityClassInfo
   ClassId:          03F6
   VfTable:          0000000000000000
   Address (Base):   0000000143102950
*/
class AabbTriggerPhysicsBody : public PhysicsBody
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */

static_assert(sizeof(AabbTriggerPhysicsBody) == 72);

}
