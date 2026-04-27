#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CD3
   TypeInfo Kind:    ClassInfo
   ClassId:          0173
   VfTable:          0000000000000000
   Address (Base):   00000001430DDBA0
*/
class ClientTrapezoidDamageComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x14A0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x14D8 */

static_assert(sizeof(ClientTrapezoidDamageComponent) == 5336);

}
