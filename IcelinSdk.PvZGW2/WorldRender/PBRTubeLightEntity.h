#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/WorldRender/PBRAnalyticLightEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        190B
   TypeInfo Kind:    EntityClassInfo
   ClassId:          03AC
   VfTable:          0000000000000000
   Address (Base):   0000000143137A90
*/
class PBRTubeLightEntity : public PBRAnalyticLightEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0180[0x0020];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01A0 */

static_assert(sizeof(PBRTubeLightEntity) == 416);

}
