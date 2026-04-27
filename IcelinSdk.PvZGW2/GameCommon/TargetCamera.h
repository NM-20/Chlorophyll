#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/Camera.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BDD
   TypeInfo Kind:    ClassInfo
   ClassId:          0109
   VfTable:          0000000000000000
   Address (Base):   00000001430CF630
*/
class TargetCamera : public Camera
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0150[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0160 */

static_assert(sizeof(TargetCamera) == 352);

}
