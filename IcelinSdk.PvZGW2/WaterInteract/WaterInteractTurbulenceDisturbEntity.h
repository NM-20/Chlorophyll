#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2E1C
   TypeInfo Kind:    EntityClassInfo
   ClassId:          029D
   VfTable:          0000000000000000
   Address (Base):   0000000143128130
*/
class WaterInteractTurbulenceDisturbEntity : public SpatialEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0028[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */

static_assert(sizeof(WaterInteractTurbulenceDisturbEntity) == 112);

}
