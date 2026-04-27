#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/ServerGhostProjectileEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EE3
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02EF
   VfTable:          0000000000000000
   Address (Base):   0000000143123720
*/
class ServerExplosionPackEntity : public ServerGhostProjectileEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0310[0x00B0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x03C0 */

static_assert(sizeof(ServerExplosionPackEntity) == 960);

}
