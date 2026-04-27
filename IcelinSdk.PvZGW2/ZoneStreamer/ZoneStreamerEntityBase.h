#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2E4B
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0486
   VfTable:          0000000000000000
   Address (Base):   0000000143127D70
*/
class ZoneStreamerEntityBase : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0248];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0268 */

static_assert(sizeof(ZoneStreamerEntityBase) == 616);

}
