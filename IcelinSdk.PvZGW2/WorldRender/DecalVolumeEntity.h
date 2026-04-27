#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/WorldRender/RenderVolumeEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1901
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0555
   VfTable:          0000000000000000
   Address (Base):   0000000143126510
*/
class DecalVolumeEntity : public RenderVolumeEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */

static_assert(sizeof(DecalVolumeEntity) == 160);

}
