#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/UITickerWidget.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BD0
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0444
   VfTable:          0000000000000000
   Address (Base):   0000000143135FB0
*/
class UIKillLogTickerWidget : public UITickerWidget
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0768[0x0450];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0BB8 */

static_assert(sizeof(UIKillLogTickerWidget) == 3000);

}
