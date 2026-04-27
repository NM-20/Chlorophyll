#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BBA
   TypeInfo Kind:    ClassInfo
   ClassId:          017C
   VfTable:          0000000000000000
   Address (Base):   00000001430CF220
*/
class ClientBuffComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x00A8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */

static_assert(sizeof(ClientBuffComponent) == 224);

}
