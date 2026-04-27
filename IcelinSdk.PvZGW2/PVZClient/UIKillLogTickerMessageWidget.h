#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/UITickerMessageWidget.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BCF
   TypeInfo Kind:    EntityClassInfo
   ClassId:          044C
   VfTable:          0000000000000000
   Address (Base):   00000001431263D0
*/
class UIKillLogTickerMessageWidget : public UITickerMessageWidget
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0108[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0150 */

static_assert(sizeof(UIKillLogTickerMessageWidget) == 336);

}
