#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/UIListRowLabelWidget.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BD6
   TypeInfo Kind:    EntityClassInfo
   ClassId:          043E
   VfTable:          0000000000000000
   Address (Base):   0000000143126290
*/
class UIListRowSliderWidget : public UIListRowLabelWidget
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0158[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0190 */

static_assert(sizeof(UIListRowSliderWidget) == 400);

}
