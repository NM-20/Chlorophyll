#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/UIWidgetEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2D7D
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0448
   VfTable:          0000000000000000
   Address (Base):   00000001431281D0
*/
class UIDebugWidget : public UIWidgetEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0108 */

static_assert(sizeof(UIDebugWidget) == 264);

}
