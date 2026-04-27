#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/Camera.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A0D
   TypeInfo Kind:    ClassInfo
   ClassId:          010E
   VfTable:          0000000000000000
   Address (Base):   000000014311F660
*/
class FreeCamera : public Camera
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0150[0x0080];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01D0 */

static_assert(sizeof(FreeCamera) == 464);

}
