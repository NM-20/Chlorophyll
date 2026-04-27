#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/CameraTrackWithSceneCamera.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A0E
   TypeInfo Kind:    ClassInfo
   ClassId:          008B
   VfTable:          0000000000000000
   Address (Base):   0000000143102180
*/
class PhysicalCameraTrack : public CameraTrackWithSceneCamera
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0080[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */

static_assert(sizeof(PhysicalCameraTrack) == 144);

}
