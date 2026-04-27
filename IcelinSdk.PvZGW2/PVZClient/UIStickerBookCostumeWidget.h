#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/PVZUIWidgetEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BD7
   TypeInfo Kind:    EntityClassInfo
   ClassId:          042D
   VfTable:          0000000000000000
   Address (Base):   0000000143135DD0
*/
class UIStickerBookCostumeWidget : public PVZUIWidgetEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0150[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01A0 */

static_assert(sizeof(UIStickerBookCostumeWidget) == 416);

}
