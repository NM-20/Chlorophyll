#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubator/UILegacyWidgetEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BDA
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0438
   VfTable:          0000000000000000
   Address (Base):   0000000143135C90
*/
class PVZUICommanderWidget : public UILegacyWidgetEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0110 */

static_assert(sizeof(PVZUICommanderWidget) == 272);

}
