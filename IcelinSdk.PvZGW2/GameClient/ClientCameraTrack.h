#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/PhysicalCameraTrack.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A07
   TypeInfo Kind:    ClassInfo
   ClassId:          008C
   VfTable:          0000000000000000
   Address (Base):   0000000143122280
*/
class ClientCameraTrack : public PhysicalCameraTrack
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0090[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */

static_assert(sizeof(ClientCameraTrack) == 160);

}
