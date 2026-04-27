#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubator/UILegacyScreenRenderPropertyEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2D69
   TypeInfo Kind:    EntityClassInfo
   ClassId:          039F
   VfTable:          0000000000000000
   Address (Base):   0000000143128D10
*/
class UILegacyScreenRenderVec4PropertyEntity : public UILegacyScreenRenderPropertyEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0038[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */

static_assert(sizeof(UILegacyScreenRenderVec4PropertyEntity) == 64);

}
