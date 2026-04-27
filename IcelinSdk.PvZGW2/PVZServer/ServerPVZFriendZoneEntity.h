#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F59
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0384
   VfTable:          0000000000000000
   Address (Base):   000000014312B790
*/
class ServerPVZFriendZoneEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x00A8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C8 */

static_assert(sizeof(ServerPVZFriendZoneEntity) == 200);

}
