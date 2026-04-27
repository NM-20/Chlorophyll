#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CD2
   TypeInfo Kind:    ClassInfo
   ClassId:          015A
   VfTable:          0000000000000000
   Address (Base):   00000001430D1D40
*/
class ClientTauntComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x00B8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F0 */

static_assert(sizeof(ClientTauntComponent) == 240);

}
