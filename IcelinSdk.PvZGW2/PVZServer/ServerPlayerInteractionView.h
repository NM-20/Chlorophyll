#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerSubView.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CF9
   TypeInfo Kind:    ClassInfo
   ClassId:          0119
   VfTable:          0000000000000000
   Address (Base):   0000000143101690
*/
class ServerPlayerInteractionView : public ServerSubView
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0040[0x0028];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */

static_assert(sizeof(ServerPlayerInteractionView) == 104);

}
