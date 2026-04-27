#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/WaterPhysicsBody.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1519
   TypeInfo Kind:    EntityClassInfo
   ClassId:          03F4
   VfTable:          0000000000000000
   Address (Base):   00000001431241C0
*/
class StaticWaterPhysicsBody : public WaterPhysicsBody
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */

static_assert(sizeof(StaticWaterPhysicsBody) == 72);

}
