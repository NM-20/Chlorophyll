#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/ClientGhostProjectileEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BFB
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02CE
   VfTable:          0000000000000000
   Address (Base):   0000000143120010
*/
class ClientExplosionPackEntity : public ClientGhostProjectileEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0340[0x00D0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0410 */

static_assert(sizeof(ClientExplosionPackEntity) == 1040);

}
