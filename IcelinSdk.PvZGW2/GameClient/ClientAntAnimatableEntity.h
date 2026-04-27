#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        09F9
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04F2
   VfTable:          0000000000000000
   Address (Base):   00000001430BDC10
*/
class ClientAntAnimatableEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0710];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0730 */

static_assert(sizeof(ClientAntAnimatableEntity) == 1840);

}
