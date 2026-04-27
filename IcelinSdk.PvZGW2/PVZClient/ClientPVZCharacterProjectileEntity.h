#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/ClientGhostProjectileEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CB6
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02CD
   VfTable:          0000000000000000
   Address (Base):   000000014312F930
*/
class ClientPVZCharacterProjectileEntity : public ClientGhostProjectileEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0340 */

static_assert(sizeof(ClientPVZCharacterProjectileEntity) == 832);

}
