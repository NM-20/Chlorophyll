#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/PVZUIWidgetEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CD6
   TypeInfo Kind:    EntityClassInfo
   ClassId:          042F
   VfTable:          0000000000000000
   Address (Base):   000000014312F6B0
*/
class UILongTextWidget : public PVZUIWidgetEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0150[0x0120];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0270 */

static_assert(sizeof(UILongTextWidget) == 624);

}
