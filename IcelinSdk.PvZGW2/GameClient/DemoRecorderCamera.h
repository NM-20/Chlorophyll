#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/FreeCamera.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A0B
   TypeInfo Kind:    ClassInfo
   ClassId:          010F
   VfTable:          0000000000000000
   Address (Base):   0000000143122190
*/
class DemoRecorderCamera : public FreeCamera
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_01D0[0x00B0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0280 */

static_assert(sizeof(DemoRecorderCamera) == 640);

}
