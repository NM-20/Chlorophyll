#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/LocalWindForceComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A66
   TypeInfo Kind:    ClassInfo
   ClassId:          020D
   VfTable:          0000000000000000
   Address (Base):   00000001430DEB40
*/
class LocalWindForceConeComponent : public LocalWindForceComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_00A0[0x00B0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0150 */

static_assert(sizeof(LocalWindForceConeComponent) == 336);

}
