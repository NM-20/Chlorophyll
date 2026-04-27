#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/ClientProjectileEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BE0
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02CF
   VfTable:          0000000000000000
   Address (Base):   0000000143123B80
*/
class ClientBulletEntity : public ClientProjectileEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0120[0x0210];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0330 */

static_assert(sizeof(ClientBulletEntity) == 816);

}
