#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/TargetCamera.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        09FD
   TypeInfo Kind:    ClassInfo
   ClassId:          010B
   VfTable:          0000000000000000
   Address (Base):   0000000143122460
*/
class ChaseCamera : public TargetCamera
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0160[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0190 */

static_assert(sizeof(ChaseCamera) == 400);

}
