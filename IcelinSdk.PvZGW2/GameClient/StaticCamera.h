#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/TargetCamera.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A0F
   TypeInfo Kind:    ClassInfo
   ClassId:          010D
   VfTable:          0000000000000000
   Address (Base):   00000001431220F0
*/
class StaticCamera : public TargetCamera
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0160[0x0130];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0290 */

static_assert(sizeof(StaticCamera) == 656);

}
