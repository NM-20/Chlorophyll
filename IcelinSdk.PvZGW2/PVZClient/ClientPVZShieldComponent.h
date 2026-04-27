#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CCA
   TypeInfo Kind:    ClassInfo
   ClassId:          0159
   VfTable:          0000000000000000
   Address (Base):   00000001430D1DE0
*/
class ClientPVZShieldComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x00B0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E8 */

static_assert(sizeof(ClientPVZShieldComponent) == 232);

}
