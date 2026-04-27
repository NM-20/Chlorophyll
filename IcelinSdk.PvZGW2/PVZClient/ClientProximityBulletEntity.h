#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/ClientBulletEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CB2
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02D0
   VfTable:          0000000000000000
   Address (Base):   000000014312F9D0
*/
class ClientProximityBulletEntity : public ClientBulletEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0330[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0340 */

static_assert(sizeof(ClientProximityBulletEntity) == 832);

}
