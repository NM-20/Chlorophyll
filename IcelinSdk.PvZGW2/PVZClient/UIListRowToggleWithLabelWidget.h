#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/UIListRowToggleWidget.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BD5
   TypeInfo Kind:    EntityClassInfo
   ClassId:          043C
   VfTable:          0000000000000000
   Address (Base):   0000000143135E70
*/
class UIListRowToggleWithLabelWidget : public UIListRowToggleWidget
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0190[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0198 */

static_assert(sizeof(UIListRowToggleWithLabelWidget) == 408);

}
