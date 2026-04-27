#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsBody.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1540
   TypeInfo Kind:    EntityClassInfo
   ClassId:          03F2
   VfTable:          0000000000000000
   Address (Base):   00000001431028B0
*/
class TerrainPhysicsBody : public PhysicsBody
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */

static_assert(sizeof(TerrainPhysicsBody) == 72);

}
