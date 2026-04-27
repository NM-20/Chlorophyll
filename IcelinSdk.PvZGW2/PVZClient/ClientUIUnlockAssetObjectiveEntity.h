#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1B9F
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04DF
   VfTable:          0000000000000000
   Address (Base):   0000000143137090
*/
class ClientUIUnlockAssetObjectiveEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0020];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */

static_assert(sizeof(ClientUIUnlockAssetObjectiveEntity) == 64);

}
