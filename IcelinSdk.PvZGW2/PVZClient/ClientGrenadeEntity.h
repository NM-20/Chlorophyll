#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/ClientGhostProjectileEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BFC
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02C9
   VfTable:          0000000000000000
   Address (Base):   000000014311F930
*/
class ClientGrenadeEntity : public ClientGhostProjectileEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0340[0x00E0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0420 */

static_assert(sizeof(ClientGrenadeEntity) == 1056);

}
