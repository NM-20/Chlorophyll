#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/PVZUIWidgetEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BCE
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0433
   VfTable:          0000000000000000
   Address (Base):   0000000143136050
*/
class UIConsumableSpawnMenuWidget : public PVZUIWidgetEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0150[0x0060];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01B0 */

static_assert(sizeof(UIConsumableSpawnMenuWidget) == 432);

}
