#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/PVZUIWidgetEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BCC
   TypeInfo Kind:    EntityClassInfo
   ClassId:          042E
   VfTable:          0000000000000000
   Address (Base):   0000000143136190
*/
class PVZButtonWidget : public PVZUIWidgetEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0150[0x0120];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0270 */

static_assert(sizeof(PVZButtonWidget) == 624);

}
