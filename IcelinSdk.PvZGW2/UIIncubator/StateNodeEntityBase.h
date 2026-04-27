#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2D7B
   TypeInfo Kind:    EntityClassInfo
   ClassId:          05A5
   VfTable:          0000000000000000
   Address (Base):   0000000143128270
*/
class StateNodeEntityBase : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0070];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */

static_assert(sizeof(StateNodeEntityBase) == 144);

}
