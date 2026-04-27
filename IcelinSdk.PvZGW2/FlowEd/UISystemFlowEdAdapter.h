#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/UISystem.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1919
   TypeInfo Kind:    ClassInfo
   ClassId:          011D
   VfTable:          0000000000000000
   Address (Base):   000000014311ED50
*/
class UISystemFlowEdAdapter : public UISystem
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0B40[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0B50 */

static_assert(sizeof(UISystemFlowEdAdapter) == 2896);

}
