#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/ClientProxyProjectileEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CB4
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02C5
   VfTable:          0000000000000000
   Address (Base):   00000001431026D0
*/
class ClientProxyGrenadeEntity : public ClientProxyProjectileEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_02A0[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x02F0 */

static_assert(sizeof(ClientProxyGrenadeEntity) == 752);

}
