#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A29
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0397
   VfTable:          0000000000000000
   Address (Base):   0000000143122FA0
*/
class ClientWarpAnimationEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0190];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01B0 */

static_assert(sizeof(ClientWarpAnimationEntity) == 432);

}
