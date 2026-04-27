#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

class EntityOwnerRange
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        091C
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0574
   VfTable:          0000000000000000
   Address (Base):   000000014313E430
*/
class EntityOwnerRangeEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */

static_assert(sizeof(EntityOwnerRangeEntity) == 32);

};

}
