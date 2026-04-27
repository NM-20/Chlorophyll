#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        09CF
   TypeInfo Kind:    ClassInfo
   ClassId:          0157
   VfTable:          0000000000000000
   Address (Base):   00000001430DF810
*/
class SunFlareComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x0438];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0470 */

static_assert(sizeof(SunFlareComponent) == 1136);

}
