#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/UIElementEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2D5A
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04A4
   VfTable:          0000000000000000
   Address (Base):   0000000143124D50
*/
class UIElementTextFieldEntity : public UIElementEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_00C0[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F0 */

static_assert(sizeof(UIElementTextFieldEntity) == 240);

}
