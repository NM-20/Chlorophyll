#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/WorldRender/OriginalLocalLightEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1910
   TypeInfo Kind:    EntityClassInfo
   ClassId:          03A7
   VfTable:          0000000000000000
   Address (Base):   0000000143126790
*/
class SpotLightEntity : public OriginalLocalLightEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0110[0x0020];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0130 */

static_assert(sizeof(SpotLightEntity) == 304);

}
