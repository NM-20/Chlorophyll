#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        09E2
   TypeInfo Kind:    ClassInfo
   ClassId:          014A
   VfTable:          0000000000000000
   Address (Base):   00000001430DF220
*/
class SkyCelestialSingleComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x00C8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */

static_assert(sizeof(SkyCelestialSingleComponent) == 256);

}
