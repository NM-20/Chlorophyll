#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/ClientGhostProjectileEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BE2
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02C8
   VfTable:          0000000000000000
   Address (Base):   0000000143122AA0
*/
class ClientMissileEntity : public ClientGhostProjectileEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0340[0x02A0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x05E0 */

static_assert(sizeof(ClientMissileEntity) == 1504);

}
