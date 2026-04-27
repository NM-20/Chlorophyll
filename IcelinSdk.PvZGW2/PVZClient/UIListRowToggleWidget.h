#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/UIListRow.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BD4
   TypeInfo Kind:    EntityClassInfo
   ClassId:          043B
   VfTable:          0000000000000000
   Address (Base):   0000000143123C20
*/
class UIListRowToggleWidget : public UIListRow
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0150[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0190 */

static_assert(sizeof(UIListRowToggleWidget) == 400);

}
