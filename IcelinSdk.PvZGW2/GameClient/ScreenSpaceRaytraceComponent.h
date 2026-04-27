#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        09DE
   TypeInfo Kind:    ClassInfo
   ClassId:          018E
   VfTable:          0000000000000000
   Address (Base):   00000001430DF360
*/
class ScreenSpaceRaytraceComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x0180];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01B8 */

static_assert(sizeof(ScreenSpaceRaytraceComponent) == 440);

}
