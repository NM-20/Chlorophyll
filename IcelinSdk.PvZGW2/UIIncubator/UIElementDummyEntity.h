#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/UIElementEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2D60
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04A7
   VfTable:          0000000000000000
   Address (Base):   0000000143129170
*/
class UIElementDummyEntity : public UIElementEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */

static_assert(sizeof(UIElementDummyEntity) == 192);

}
