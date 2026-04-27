#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/LocalWindForceComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A64
   TypeInfo Kind:    ClassInfo
   ClassId:          020E
   VfTable:          0000000000000000
   Address (Base):   00000001430DEB90
*/
class LocalWindForceBaked3DAs2x2DTexComponent : public LocalWindForceComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_00A0[0x0060];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */

static_assert(sizeof(LocalWindForceBaked3DAs2x2DTexComponent) == 256);

}
