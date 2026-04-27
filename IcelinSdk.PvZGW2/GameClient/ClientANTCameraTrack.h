#pragma once

#include <IcelinSdk.PvZGW2/GameCommon/Camera.h>
#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/EntityTrack.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        09FF
   TypeInfo Kind:    ClassInfo
   ClassId:          007F
   VfTable:          0000000000000000
   Address (Base):   00000001431223C0
*/
class ClientANTCameraTrack : public EntityTrack
{
public:
  /* TypeInfo (Array): 0000000000000000
     RuntimeId:        0A00
     TypeInfo Kind:    ClassInfo
     ClassId:          0108
     VfTable:          0000000000000000
     Address (Base):   0000000143122370
  */
  class AntCameraTrackCamera : public Camera
  {
  public:
    typedef struct ClassInfo TypeInfo_t;

  private:
    /* Intended for use in Ida. Do not remove. */
    static void IdaForceImport(TypeInfo_t);
  }; /* Size: 0x0150 */

  static_assert(sizeof(AntCameraTrackCamera) == 336);

  typedef struct ClassInfo TypeInfo_t;

  char pad_0080[0x01D0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0250 */

static_assert(sizeof(ClientANTCameraTrack) == 592);

}
