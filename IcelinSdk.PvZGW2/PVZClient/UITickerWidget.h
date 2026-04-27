#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/UIWidgetEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CDC
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0442
   VfTable:          0000000000000000
   Address (Base):   0000000143122960
*/
class UITickerWidget : public UIWidgetEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0108[0x0660];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0768 */

static_assert(sizeof(UITickerWidget) == 1896);

}
