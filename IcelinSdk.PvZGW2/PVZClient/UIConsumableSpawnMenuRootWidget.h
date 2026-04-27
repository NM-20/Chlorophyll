#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/PVZUIWidgetEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BCD
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0431
   VfTable:          0000000000000000
   Address (Base):   00000001431360F0
*/
class UIConsumableSpawnMenuRootWidget : public PVZUIWidgetEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0150[0x00D0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0220 */

static_assert(sizeof(UIConsumableSpawnMenuRootWidget) == 544);

}
