#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/WorldRender/OriginalLocalLightEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        190F
   TypeInfo Kind:    EntityClassInfo
   ClassId:          03A8
   VfTable:          0000000000000000
   Address (Base):   0000000143126830
*/
class PointLightEntity : public OriginalLocalLightEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0110[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0120 */

static_assert(sizeof(PointLightEntity) == 288);

}
