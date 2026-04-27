#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1B94
   TypeInfo Kind:    EntityClassInfo
   ClassId:          029B
   VfTable:          0000000000000000
   Address (Base):   0000000143102810
*/
class ClientPVZInteractionEntity : public SpatialEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0028[0x02F8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0320 */

static_assert(sizeof(ClientPVZInteractionEntity) == 800);

}
