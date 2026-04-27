#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/TargetCamera.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A10
   TypeInfo Kind:    ClassInfo
   ClassId:          010A
   VfTable:          0000000000000000
   Address (Base):   00000001431220A0
*/
class VehicleCamera : public TargetCamera
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0160 */

static_assert(sizeof(VehicleCamera) == 352);

}
