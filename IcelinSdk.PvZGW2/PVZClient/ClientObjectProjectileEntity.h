#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/ClientGhostProjectileEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CB0
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02C7
   VfTable:          0000000000000000
   Address (Base):   000000014312FA70
*/
class ClientObjectProjectileEntity : public ClientGhostProjectileEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0340[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0380 */

static_assert(sizeof(ClientObjectProjectileEntity) == 896);

}
