#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0D17
   TypeInfo Kind:    EntityClassInfo
   ClassId:          053D
   VfTable:          0000000000000000
   Address (Base):   0000000143126C90
*/
class ServerWarpAnimationEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0190];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01B0 */

static_assert(sizeof(ServerWarpAnimationEntity) == 432);

}
