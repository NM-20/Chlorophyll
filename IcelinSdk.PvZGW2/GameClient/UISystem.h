#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/IUISystem.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0AE1
   TypeInfo Kind:    ClassInfo
   ClassId:          011C
   VfTable:          0000000000000000
   Address (Base):   000000014311F5C0
*/
class UISystem : public IUISystem
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0018[0x0B28];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0B40 */

static_assert(sizeof(UISystem) == 2880);

}
