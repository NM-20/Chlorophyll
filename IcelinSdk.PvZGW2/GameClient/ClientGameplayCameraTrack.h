#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/CameraTrackBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A08
   TypeInfo Kind:    ClassInfo
   ClassId:          008E
   VfTable:          0000000000000000
   Address (Base):   0000000143122230
*/
class ClientGameplayCameraTrack : public CameraTrackBase
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */

static_assert(sizeof(ClientGameplayCameraTrack) == 112);

}
