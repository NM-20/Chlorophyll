#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/UIWidgetEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BCB
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0447
   VfTable:          0000000000000000
   Address (Base):   0000000143136230
*/
class UIBasicLoadingIndicatorWidget : public UIWidgetEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0108[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0118 */

static_assert(sizeof(UIBasicLoadingIndicatorWidget) == 280);

}
