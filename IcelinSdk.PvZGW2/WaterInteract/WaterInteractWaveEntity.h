#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2E22
   TypeInfo Kind:    EntityClassInfo
   ClassId:          037A
   VfTable:          0000000000000000
   Address (Base):   0000000143127FF0
*/
class WaterInteractWaveEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0060];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */

static_assert(sizeof(WaterInteractWaveEntity) == 128);

}
