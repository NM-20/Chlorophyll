#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/UIListRow.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BD3
   TypeInfo Kind:    EntityClassInfo
   ClassId:          043D
   VfTable:          0000000000000000
   Address (Base):   0000000143126330
*/
class UIListRowLabelWidget : public UIListRow
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0150[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0158 */

static_assert(sizeof(UIListRowLabelWidget) == 344);

}
