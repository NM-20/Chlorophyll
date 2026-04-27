#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/ComponentEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        152E
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02B1
   VfTable:          0000000000000000
   Address (Base):   0000000143126AB0
*/
class PhysicsProxyEntity : public ComponentEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0040[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */

static_assert(sizeof(PhysicsProxyEntity) == 80);

}
