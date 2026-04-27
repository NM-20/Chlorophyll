#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BEF
   TypeInfo Kind:    ClassInfo
   ClassId:          0189
   VfTable:          0000000000000000
   Address (Base):   00000001430D21F0
*/
class ClientPVZCharacterBodyComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x00D8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0110 */

static_assert(sizeof(ClientPVZCharacterBodyComponent) == 272);

}
