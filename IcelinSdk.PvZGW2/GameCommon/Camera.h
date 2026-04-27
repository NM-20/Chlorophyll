#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BDC
   TypeInfo Kind:    ClassInfo
   ClassId:          0107
   VfTable:          0000000000000000
   Address (Base):   00000001430D28D0
*/
class Camera
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0150];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0150 */

static_assert(sizeof(Camera) == 336);

}
