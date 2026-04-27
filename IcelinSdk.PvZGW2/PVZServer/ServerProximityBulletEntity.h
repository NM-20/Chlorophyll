#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/ServerBulletEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EE7
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02EC
   VfTable:          0000000000000000
   Address (Base):   0000000143125750
*/
class ServerProximityBulletEntity : public ServerBulletEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_02D0[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x02E0 */

static_assert(sizeof(ServerProximityBulletEntity) == 736);

}
