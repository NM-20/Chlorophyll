#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CC9
   TypeInfo Kind:    ClassInfo
   ClassId:          014E
   VfTable:          0000000000000000
   Address (Base):   00000001430D1CF0
*/
class ClientPVZRadarSweepComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */

static_assert(sizeof(ClientPVZRadarSweepComponent) == 64);

}
