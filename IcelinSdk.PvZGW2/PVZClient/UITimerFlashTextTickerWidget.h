#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/UITickerWidget.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CDE
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0443
   VfTable:          0000000000000000
   Address (Base):   000000014312F430
*/
class UITimerFlashTextTickerWidget : public UITickerWidget
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0768 */

static_assert(sizeof(UITimerFlashTextTickerWidget) == 1896);

}
