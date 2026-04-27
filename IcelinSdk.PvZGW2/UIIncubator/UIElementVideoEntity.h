#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/UIElementEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2D5E
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04A6
   VfTable:          0000000000000000
   Address (Base):   00000001431292B0
*/
class UIElementVideoEntity : public UIElementEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */

static_assert(sizeof(UIElementVideoEntity) == 192);

}
