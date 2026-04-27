#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/PVZUIWidgetEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BD8
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0430
   VfTable:          0000000000000000
   Address (Base):   00000001431261F0
*/
class UIStickerBookCostumeHolder : public PVZUIWidgetEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0150[0x0020];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0170 */

static_assert(sizeof(UIStickerBookCostumeHolder) == 368);

}
