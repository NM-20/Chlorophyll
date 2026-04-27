#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Component.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B25
   TypeInfo Kind:    ClassInfo
   ClassId:          012F
   VfTable:          0000000000000000
   Address (Base):   00000001430BD330
*/
class GameComponent : public Component
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0020[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */

static_assert(sizeof(GameComponent) == 48);

}
