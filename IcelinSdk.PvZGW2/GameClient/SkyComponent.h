#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        09CA
   TypeInfo Kind:    ClassInfo
   ClassId:          0175
   VfTable:          0000000000000000
   Address (Base):   00000001430DF9A0
*/
class SkyComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x0538];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0570 */

static_assert(sizeof(SkyComponent) == 1392);

}
