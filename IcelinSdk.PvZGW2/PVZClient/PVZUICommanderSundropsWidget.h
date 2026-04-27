#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubator/UILegacyWidgetEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BD9
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0435
   VfTable:          0000000000000000
   Address (Base):   0000000143135D30
*/
class PVZUICommanderSundropsWidget : public UILegacyWidgetEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0110[0x3440];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x3550 */

static_assert(sizeof(PVZUICommanderSundropsWidget) == 13648);

}
