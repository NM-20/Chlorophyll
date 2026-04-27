#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubator/UIElementTextFieldEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CE3
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04A5
   VfTable:          0000000000000000
   Address (Base):   0000000143125890
*/
class PVZUIElementTextFieldEntity : public UIElementTextFieldEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_00F0[0x0090];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0180 */

static_assert(sizeof(PVZUIElementTextFieldEntity) == 384);

}
