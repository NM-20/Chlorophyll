#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/ClientProjectileEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BE5
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02C2
   VfTable:          0000000000000000
   Address (Base):   0000000143126150
*/
class ClientProxyProjectileEntity : public ClientProjectileEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0120[0x0180];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x02A0 */

static_assert(sizeof(ClientProxyProjectileEntity) == 672);

}
