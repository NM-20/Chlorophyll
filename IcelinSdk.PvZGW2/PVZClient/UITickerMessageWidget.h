#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/UIWidgetEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CDB
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0449
   VfTable:          0000000000000000
   Address (Base):   0000000143122A00
*/
class UITickerMessageWidget : public UIWidgetEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0108 */

static_assert(sizeof(UITickerMessageWidget) == 264);

}
