#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/UICppScreen.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2D7E
   TypeInfo Kind:    ClassInfo
   ClassId:          0121
   VfTable:          0000000000000000
   Address (Base):   0000000143101460
*/
class UILegacyCppScreen : public UICppScreen
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0440[0x02D0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0710 */

static_assert(sizeof(UILegacyCppScreen) == 1808);

}
