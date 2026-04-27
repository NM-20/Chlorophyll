#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerCharacterCustomizationComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EF1
   TypeInfo Kind:    ClassInfo
   ClassId:          01E0
   VfTable:          0000000000000000
   Address (Base):   00000001430D1B60
*/
class ServerPVZCharacterCustomizationComponent : public ServerCharacterCustomizationComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0350[0x02F8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0648 */

static_assert(sizeof(ServerPVZCharacterCustomizationComponent) == 1608);

}
