#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubator/UILegacyWidgetEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BDB
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0437
   VfTable:          0000000000000000
   Address (Base):   0000000143135BF0
*/
class PVZUIKinectHandWidget : public UILegacyWidgetEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0110[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0118 */

static_assert(sizeof(PVZUIKinectHandWidget) == 280);

}
