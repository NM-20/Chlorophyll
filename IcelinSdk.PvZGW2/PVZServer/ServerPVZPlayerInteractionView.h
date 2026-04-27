#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/ServerPlayerInteractionView.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EB8
   TypeInfo Kind:    ClassInfo
   ClassId:          011A
   VfTable:          0000000000000000
   Address (Base):   0000000143120660
*/
class ServerPVZPlayerInteractionView : public ServerPlayerInteractionView
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */

static_assert(sizeof(ServerPVZPlayerInteractionView) == 104);

}
