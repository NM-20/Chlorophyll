#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/WorldRender/PBRAnalyticLightEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        190A
   TypeInfo Kind:    EntityClassInfo
   ClassId:          03AB
   VfTable:          0000000000000000
   Address (Base):   0000000143137B30
*/
class PBRSpotLightEntity : public PBRAnalyticLightEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0180[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01D0 */

static_assert(sizeof(PBRSpotLightEntity) == 464);

}
