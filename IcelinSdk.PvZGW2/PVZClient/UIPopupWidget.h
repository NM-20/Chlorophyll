#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/PVZUIWidgetEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BA2
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0432
   VfTable:          0000000000000000
   Address (Base):   0000000143136EB0
*/
class UIPopupWidget : public PVZUIWidgetEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0150[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0190 */

static_assert(sizeof(UIPopupWidget) == 400);

}
