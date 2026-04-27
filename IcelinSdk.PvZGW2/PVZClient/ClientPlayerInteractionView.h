#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientSubView.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BE9
   TypeInfo Kind:    ClassInfo
   ClassId:          0114
   VfTable:          0000000000000000
   Address (Base):   0000000143101780
*/
class ClientPlayerInteractionView : public ClientSubView
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x0068];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0098 */

static_assert(sizeof(ClientPlayerInteractionView) == 152);

}
