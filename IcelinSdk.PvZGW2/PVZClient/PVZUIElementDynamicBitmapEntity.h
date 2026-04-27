#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubator/UIElementBitmapEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CE1
   TypeInfo Kind:    EntityClassInfo
   ClassId:          049F
   VfTable:          0000000000000000
   Address (Base):   00000001431259D0
*/
class PVZUIElementDynamicBitmapEntity : public UIElementBitmapEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_00C0[0x0070];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0130 */

static_assert(sizeof(PVZUIElementDynamicBitmapEntity) == 304);

}
