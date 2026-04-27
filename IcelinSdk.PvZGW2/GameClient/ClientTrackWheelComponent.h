#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientWheelComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B13
   TypeInfo Kind:    ClassInfo
   ClassId:          0169
   VfTable:          0000000000000000
   Address (Base):   00000001430DE9B0
*/
class ClientTrackWheelComponent : public ClientWheelComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_00D0[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */

static_assert(sizeof(ClientTrackWheelComponent) == 224);

}
