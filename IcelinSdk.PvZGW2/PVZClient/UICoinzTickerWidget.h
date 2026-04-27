#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/UITickerWidget.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CD5
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0445
   VfTable:          0000000000000000
   Address (Base):   000000014312F750
*/
class UICoinzTickerWidget : public UITickerWidget
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0768[0x0410];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0B78 */

static_assert(sizeof(UICoinzTickerWidget) == 2936);

}
