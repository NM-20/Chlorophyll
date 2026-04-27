#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubator/UILegacyScreenRenderPropertyEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2D64
   TypeInfo Kind:    EntityClassInfo
   ClassId:          03A2
   VfTable:          0000000000000000
   Address (Base):   0000000143129030
*/
class UILegacyScreenRenderIntPropertyEntity : public UILegacyScreenRenderPropertyEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0038[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */

static_assert(sizeof(UILegacyScreenRenderIntPropertyEntity) == 64);

}
