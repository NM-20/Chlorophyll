#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/ClientPlayerInteractionView.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BC8
   TypeInfo Kind:    ClassInfo
   ClassId:          0115
   VfTable:          0000000000000000
   Address (Base):   000000014311E490
*/
class ClientPVZPlayerInteractionView : public ClientPlayerInteractionView
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0098 */

static_assert(sizeof(ClientPVZPlayerInteractionView) == 152);

}
