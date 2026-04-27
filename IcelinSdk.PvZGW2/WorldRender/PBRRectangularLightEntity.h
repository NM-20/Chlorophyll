#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/WorldRender/PBRAnalyticLightEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        190C
   TypeInfo Kind:    EntityClassInfo
   ClassId:          03AD
   VfTable:          0000000000000000
   Address (Base):   00000001431379F0
*/
class PBRRectangularLightEntity : public PBRAnalyticLightEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0180[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0190 */

static_assert(sizeof(PBRRectangularLightEntity) == 400);

}
