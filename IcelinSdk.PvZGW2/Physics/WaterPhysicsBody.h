#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsBody.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1541
   TypeInfo Kind:    EntityClassInfo
   ClassId:          03F3
   VfTable:          0000000000000000
   Address (Base):   00000001430CE270
*/
class WaterPhysicsBody : public PhysicsBody
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */

static_assert(sizeof(WaterPhysicsBody) == 72);

}
