#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F89
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04AC
   VfTable:          0000000000000000
   Address (Base):   0000000143102590
*/
class PVZPlayerIteratorFilterEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */

static_assert(sizeof(PVZPlayerIteratorFilterEntity) == 48);

}
