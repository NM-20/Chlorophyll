#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        077C
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0361
   VfTable:          0000000000000000
   Address (Base):   00000001431409B0
*/
class BoolHubEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */

static_assert(sizeof(BoolHubEntity) == 80);

}
