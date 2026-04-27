#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/WorldRender/LocalLightEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1908
   TypeInfo Kind:    EntityClassInfo
   ClassId:          03A9
   VfTable:          0000000000000000
   Address (Base):   0000000143122C80
*/
class PBRAnalyticLightEntity : public LocalLightEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_00B0[0x00D0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0180 */

static_assert(sizeof(PBRAnalyticLightEntity) == 384);

}
