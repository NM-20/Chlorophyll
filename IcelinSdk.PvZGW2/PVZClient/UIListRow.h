#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/UIWidgetEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BD1
   TypeInfo Kind:    EntityClassInfo
   ClassId:          043A
   VfTable:          0000000000000000
   Address (Base):   0000000143122BE0
*/
class UIListRow : public UIWidgetEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0108[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0150 */

static_assert(sizeof(UIListRow) == 336);

}
