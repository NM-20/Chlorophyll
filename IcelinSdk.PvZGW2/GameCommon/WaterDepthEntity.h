#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BF7
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0306
   VfTable:          0000000000000000
   Address (Base):   000000014313AC90
*/
class WaterDepthEntity : public SpatialEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0028[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */

static_assert(sizeof(WaterDepthEntity) == 88);

}
