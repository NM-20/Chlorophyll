#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/ClientProxyProjectileEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CB3
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02C3
   VfTable:          0000000000000000
   Address (Base):   0000000143123860
*/
class ClientProxyExplosionPackEntity : public ClientProxyProjectileEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x02A0 */

static_assert(sizeof(ClientProxyExplosionPackEntity) == 672);

}
