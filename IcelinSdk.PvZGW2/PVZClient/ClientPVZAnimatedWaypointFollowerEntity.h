#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C73
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0498
   VfTable:          0000000000000000
   Address (Base):   0000000143131690
*/
class ClientPVZAnimatedWaypointFollowerEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x01C0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01E0 */

static_assert(sizeof(ClientPVZAnimatedWaypointFollowerEntity) == 480);

}
