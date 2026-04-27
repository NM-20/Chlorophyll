#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A25
   TypeInfo Kind:    EntityClassInfo
   ClassId:          042A
   VfTable:          0000000000000000
   Address (Base):   00000001430CE3B0
*/
class UIWidgetEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x00E8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0108 */

static_assert(sizeof(UIWidgetEntity) == 264);

}
