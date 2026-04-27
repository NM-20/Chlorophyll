#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/ServerProjectileEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EC0
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02EE
   VfTable:          0000000000000000
   Address (Base):   000000014311FF70
*/
class ServerGhostProjectileEntity : public ServerProjectileEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_01A0[0x0170];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0310 */

static_assert(sizeof(ServerGhostProjectileEntity) == 784);

}
