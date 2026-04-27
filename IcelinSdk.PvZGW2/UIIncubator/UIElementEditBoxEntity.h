#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/UIElementEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2D5B
   TypeInfo Kind:    EntityClassInfo
   ClassId:          049C
   VfTable:          0000000000000000
   Address (Base):   00000001431293F0
*/
class UIElementEditBoxEntity : public UIElementEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_00C0[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0110 */

static_assert(sizeof(UIElementEditBoxEntity) == 272);

}
