#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/UIElementEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BCA
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04A1
   VfTable:          0000000000000000
   Address (Base):   00000001431362D0
*/
class UIElementBitmapMaskEntity : public UIElementEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_00C0[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0110 */

static_assert(sizeof(UIElementBitmapMaskEntity) == 272);

}
