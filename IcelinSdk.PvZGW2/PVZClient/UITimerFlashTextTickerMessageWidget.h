#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/UITickerMessageWidget.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CDD
   TypeInfo Kind:    EntityClassInfo
   ClassId:          044B
   VfTable:          0000000000000000
   Address (Base):   0000000143125BB0
*/
class UITimerFlashTextTickerMessageWidget : public UITickerMessageWidget
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0108[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0110 */

static_assert(sizeof(UITimerFlashTextTickerMessageWidget) == 272);

}
