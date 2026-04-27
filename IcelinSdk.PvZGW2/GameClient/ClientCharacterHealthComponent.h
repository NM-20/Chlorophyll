#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientControllableHealthComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A2F
   TypeInfo Kind:    ClassInfo
   ClassId:          0244
   VfTable:          0000000000000000
   Address (Base):   00000001430CF8B0
*/
class ClientCharacterHealthComponent : public ClientControllableHealthComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0048[0x0020];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */

static_assert(sizeof(ClientCharacterHealthComponent) == 104);

}
