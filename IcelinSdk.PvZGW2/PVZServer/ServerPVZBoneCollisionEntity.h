#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EC8
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0456
   VfTable:          0000000000000000
   Address (Base):   000000014312EFD0
*/
class ServerPVZBoneCollisionEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0120];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0140 */

static_assert(sizeof(ServerPVZBoneCollisionEntity) == 320);

}
