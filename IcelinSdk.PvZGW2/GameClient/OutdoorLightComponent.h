#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        09C6
   TypeInfo Kind:    ClassInfo
   ClassId:          017B
   VfTable:          0000000000000000
   Address (Base):   00000001430DFAE0
*/
class OutdoorLightComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x01F8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0230 */

static_assert(sizeof(OutdoorLightComponent) == 560);

}
