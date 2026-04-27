#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B19
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0394
   VfTable:          0000000000000000
   Address (Base):   000000014313BC30
*/
class SoundAreaEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0150];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0170 */

static_assert(sizeof(SoundAreaEntity) == 368);

}
