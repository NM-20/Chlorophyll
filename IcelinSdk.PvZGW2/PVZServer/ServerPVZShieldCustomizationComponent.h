#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F7A
   TypeInfo Kind:    ClassInfo
   ClassId:          01F8
   VfTable:          0000000000000000
   Address (Base):   00000001430BE810
*/
class ServerPVZShieldCustomizationComponent : public ServerGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */

static_assert(sizeof(ServerPVZShieldCustomizationComponent) == 120);

}
