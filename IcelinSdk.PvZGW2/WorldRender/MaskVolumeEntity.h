#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/WorldRender/RenderVolumeEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1902
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0554
   VfTable:          0000000000000000
   Address (Base):   0000000143137E50
*/
class MaskVolumeEntity : public RenderVolumeEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */

static_assert(sizeof(MaskVolumeEntity) == 160);

}
