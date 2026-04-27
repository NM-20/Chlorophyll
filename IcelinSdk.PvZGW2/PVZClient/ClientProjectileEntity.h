#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientPhysicsEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BE3
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02C1
   VfTable:          0000000000000000
   Address (Base):   0000000143122B40
*/
class ClientProjectileEntity : public ClientPhysicsEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0070[0x00B0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0120 */

static_assert(sizeof(ClientProjectileEntity) == 288);

}
