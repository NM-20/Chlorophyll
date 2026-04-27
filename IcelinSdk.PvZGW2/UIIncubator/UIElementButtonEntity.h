#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/UIElementEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2D5C
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04A3
   VfTable:          0000000000000000
   Address (Base):   0000000143129350
*/
class UIElementButtonEntity : public UIElementEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_00C0[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0110 */

static_assert(sizeof(UIElementButtonEntity) == 272);

}
