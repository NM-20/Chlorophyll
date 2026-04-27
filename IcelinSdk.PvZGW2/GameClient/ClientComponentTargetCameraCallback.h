#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/TargetCameraCallback.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0AFD
   TypeInfo Kind:    ClassInfo
   ClassId:          0103
   VfTable:          0000000000000000
   Address (Base):   0000000143121EC0
*/
class ClientComponentTargetCameraCallback : public TargetCameraCallback
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0008[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */

static_assert(sizeof(ClientComponentTargetCameraCallback) == 80);

}
