#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/ClientBulletEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CB8
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02D1
   VfTable:          0000000000000000
   Address (Base):   000000014312F7F0
*/
class ClientSphereBulletEntity : public ClientBulletEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0330[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0370 */

static_assert(sizeof(ClientSphereBulletEntity) == 880);

}
