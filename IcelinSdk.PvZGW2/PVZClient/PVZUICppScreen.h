#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubator/UILegacyCppScreen.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C01
   TypeInfo Kind:    ClassInfo
   ClassId:          0122
   VfTable:          0000000000000000
   Address (Base):   00000001431016E0
*/
class PVZUICppScreen : public UILegacyCppScreen
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0710[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0720 */

static_assert(sizeof(PVZUICppScreen) == 1824);

}
