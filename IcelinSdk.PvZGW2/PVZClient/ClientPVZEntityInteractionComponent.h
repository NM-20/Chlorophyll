#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CC8
   TypeInfo Kind:    ClassInfo
   ClassId:          013A
   VfTable:          0000000000000000
   Address (Base):   00000001430BD940
*/
class ClientPVZEntityInteractionComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x02A0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x02D8 */

static_assert(sizeof(ClientPVZEntityInteractionComponent) == 728);

}
