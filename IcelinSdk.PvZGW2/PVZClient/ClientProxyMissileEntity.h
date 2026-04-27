#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/ClientProxyProjectileEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BE4
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02C4
   VfTable:          0000000000000000
   Address (Base):   00000001431200B0
*/
class ClientProxyMissileEntity : public ClientProxyProjectileEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_02A0[0x01B0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0450 */

static_assert(sizeof(ClientProxyMissileEntity) == 1104);

}
