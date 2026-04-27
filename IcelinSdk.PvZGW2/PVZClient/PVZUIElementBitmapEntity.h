#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubator/UIElementBitmapEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CE0
   TypeInfo Kind:    EntityClassInfo
   ClassId:          049E
   VfTable:          0000000000000000
   Address (Base):   0000000143125A70
*/
class PVZUIElementBitmapEntity : public UIElementBitmapEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */

static_assert(sizeof(PVZUIElementBitmapEntity) == 192);

}
