#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EC6
   TypeInfo Kind:    EntityClassInfo
   ClassId:          057F
   VfTable:          0000000000000000
   Address (Base):   000000014312F110
*/
class ServerPVZAnimatedWaypointFollowerEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0190];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01B0 */

static_assert(sizeof(ServerPVZAnimatedWaypointFollowerEntity) == 432);

}
