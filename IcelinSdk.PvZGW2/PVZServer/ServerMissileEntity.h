#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/ServerGhostProjectileEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EC1
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02F1
   VfTable:          0000000000000000
   Address (Base):   0000000143102630
*/
class ServerMissileEntity : public ServerGhostProjectileEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0310[0x0180];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0490 */

static_assert(sizeof(ServerMissileEntity) == 1168);

}
