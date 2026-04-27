#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F96
   TypeInfo Kind:    EntityClassInfo
   ClassId:          045E
   VfTable:          0000000000000000
   Address (Base):   000000014312AD90
*/
class PVZFloatRangeConverterEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */

static_assert(sizeof(PVZFloatRangeConverterEntity) == 96);

}
