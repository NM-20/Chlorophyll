#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BF7
   TypeInfo Kind:    ClassInfo
   ClassId:          0174
   VfTable:          0000000000000000
   Address (Base):   00000001430B5E00
*/
class ClientPVZCharacterWeaponsComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x13A8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x13E0 */

static_assert(sizeof(ClientPVZCharacterWeaponsComponent) == 5088);

}
