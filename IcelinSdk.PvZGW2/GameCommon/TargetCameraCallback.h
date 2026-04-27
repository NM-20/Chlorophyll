#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BDE
   TypeInfo Kind:    ClassInfo
   ClassId:          00FF
   VfTable:          0000000000000000
   Address (Base):   00000001430CDE60
*/
class TargetCameraCallback
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */

static_assert(sizeof(TargetCameraCallback) == 8);

}
