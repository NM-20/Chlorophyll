#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/PhysicalCameraTrack.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        09FE
   TypeInfo Kind:    ClassInfo
   ClassId:          008D
   VfTable:          0000000000000000
   Address (Base):   0000000143122410
*/
class ClientANTAnimatableCameraTrack : public PhysicalCameraTrack
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0090[0x0018];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A8 */

static_assert(sizeof(ClientANTAnimatableCameraTrack) == 168);

}
