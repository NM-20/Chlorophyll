#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/ServerBulletEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F62
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02ED
   VfTable:          0000000000000000
   Address (Base):   000000014312B3D0
*/
class ServerSphereBulletEntity : public ServerBulletEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_02D0[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0310 */

static_assert(sizeof(ServerSphereBulletEntity) == 784);

}
