#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubator/UILegacyWidgetEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CD7
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0436
   VfTable:          0000000000000000
   Address (Base):   000000014312F610
*/
class UIMinimapVisualWidget : public UILegacyWidgetEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0110[0x0170];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0280 */

static_assert(sizeof(UIMinimapVisualWidget) == 640);

}
