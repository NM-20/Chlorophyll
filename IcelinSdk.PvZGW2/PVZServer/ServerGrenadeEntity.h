#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/ServerGhostProjectileEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EE4
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02F3
   VfTable:          0000000000000000
   Address (Base):   000000014311FE30
*/
class ServerGrenadeEntity : public ServerGhostProjectileEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0310[0x0070];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0380 */

static_assert(sizeof(ServerGrenadeEntity) == 896);

}
