#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientSubView.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A62
   TypeInfo Kind:    ClassInfo
   ClassId:          0113
   VfTable:          0000000000000000
   Address (Base):   000000014311F610
*/
class ClientSpectatorSubView : public ClientSubView
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */

static_assert(sizeof(ClientSpectatorSubView) == 56);

}
