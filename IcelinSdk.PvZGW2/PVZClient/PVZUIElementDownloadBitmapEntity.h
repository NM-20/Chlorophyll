#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubator/UIElementBitmapEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CE2
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04A0
   VfTable:          0000000000000000
   Address (Base):   0000000143125930
*/
class PVZUIElementDownloadBitmapEntity : public UIElementBitmapEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_00C0[0x0090];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0150 */

static_assert(sizeof(PVZUIElementDownloadBitmapEntity) == 336);

}
