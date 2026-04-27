#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientCharacterHealthComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BF3
   TypeInfo Kind:    ClassInfo
   ClassId:          0245
   VfTable:          0000000000000000
   Address (Base):   00000001430B6FD0
*/
class ClientPVZCharacterHealthComponent : public ClientCharacterHealthComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0068[0x0F08];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0F70 */

static_assert(sizeof(ClientPVZCharacterHealthComponent) == 3952);

}
